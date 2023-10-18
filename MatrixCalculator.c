#include <stdio.h>
#include <math.h>

int main()
{
	int r1, c1, i, j;
	printf("Enter order of matrix A: ");
	scanf("%d%d", &r1, &c1);
	float mata[r1][c1];
	printf("Enter the elements of %d X %d matrix A: ", r1, c1);
	printf("\n");
	for (i=0; i<r1; i++)
	{
		for (j=0; j<c1; j++)
		{
			printf("A[%d][%d] = ", i+1, j+1);
			scanf("%f", &mata[i][j]);
		}
	}
	int choice;
	line17:printf("\nWhat you want to do?\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Determinant\n5. Inverse\n6. Rank\n7. Eigen Values\nPlease enter your choice number from above options : ");
	scanf("%d", &choice);
  switch (choice)
	{
		case 1:
		{
			float matb[r1][c1];
	        printf("Enter the elements of %d X %d matrix B: ", r1, c1);
			printf("\n");
	        for (i=0; i<r1; i++)
	        {
		        for (j=0; j<c1; j++)
		        {
					printf("B[%d][%d] = ", i+1, j+1);
			        scanf("%f", &matb[i][j]);
		        }
	        }
			float matsum[r1][c1];
			for (i=0; i<r1; i++)
			{
				for (j=0; j<c1; j++)
				{
					matsum[i][j] = mata[i][j] + matb[i][j];
				}
			}
			printf("\nMat(A) = ");
			for (i=0; i<r1; i++)
			{
				for (j=0; j<c1; j++)
				{
					printf("%.2f ", mata[i][j]);
				}
				printf("\n\t     ");
			}
			printf("\nMat(B) = ");
			for (i=0; i<r1; i++)
			{
				for (j=0; j<c1; j++)
				{
					printf("%.2f ", matb[i][j]);
				}
				printf("\n\t     ");
			}
			printf("\nMat(A) + Mat(B) = ");
			for (i=0; i<r1; i++)
			{
				for (j=0; j<c1; j++)
				{
					printf("%.2f ", matsum[i][j]);
				}
				printf("\n\t              ");
			}
		}
		break;
		
		case 2:
		{
			float matb[r1][c1];
	        printf("\nEnter the elements of %d X %d matrix B: ", r1, c1);
	        printf ("\n");
	        for (i=0; i<r1; i++)
	        {
		        for (j=0; j<c1; j++)
		        {
					printf("B[%d][%d] = ", i+1, j+1);
			        scanf("%f", &matb[i][j]);
		        }
	        }
			float matdiff[r1][c1];
			for (i=0; i<r1; i++)
			{
				for (j=0; j<c1; j++)
				{
					matdiff[i][j] = mata[i][j] - matb[i][j];
				}
			}
			printf("\nMat(A) = ");
			for (i=0; i<r1; i++)
			{
				for (j=0; j<c1; j++)
				{
					printf("%.2f ", mata[i][j]);
				}
				printf("\n\t     ");
			}
			printf("\nMat(B) = ");
			for (i=0; i<r1; i++)
			{
				for (j=0; j<c1; j++)
				{
					printf("%.2f ", matb[i][j]);
				}
				printf("\n\t     ");
			}
			printf("\nMat(A) - Mat(B) = ");
			for (i=0; i<r1; i++)
			{
				for (j=0; j<c1; j++)
				{
					printf("%.2f ", matdiff[i][j]);
				}
				printf("\n\t              ");
			}
		}
		break;
		
		case 3:
		{
			int r2, c2;
			printf("Enter order of matrix B: ");
	    scanf("%d%d", &r2, &c2);
			printf("\n");
			float matb[r2][c2];
	    if (c1==r2)
			{
				float matmul[r1][c2];
				printf("Enter the elements of %d X %d matrix B: ", r2, c2);
	      printf ("\n");
	      for (i=0; i<r2; i++)
	      {
		      for (j=0; j<c2; j++)
		      {
						printf("B[%d][%d] = ", i+1, j+1);
			      scanf("%f", &matb[i][j]);
		      }
	      }
				int k;
				for (i=0; i<r1; i++)
				{
					for (j=0; j<c2; j++)
					{
						for (k=0; k<c1; k++)
						{
							matmul[i][j] = 0;
							matmul[i][j] += mata[i][k] * matb[k][j]; 
						}
					}
				}
				printf("\nMat(A) = ");
			    for (i=0; i<r1; i++)
			    {
				    for (j=0; j<c1; j++)
				    {
					    printf("%.2f ", mata[i][j]);
				    }
				    printf("\n\t     ");
			    }
			    printf("\nMat(B) = ");
			    for (i=0; i<r2; i++)
			    {
				    for (j=0; j<c2; j++)
				    {
					    printf("%.2f ", matb[i][j]);
				    }
				    printf("\n\t     ");
			    }
			    printf("\nMat(A) X Mat(B) = ");
			    for (i=0; i<r1; i++)
			    {
				    for (j=0; j<c1; j++)
				    {
					    printf("%.2f ", matmul[i][j]);
				    }
				    printf("\n\t              ");
			    }
			}
			else
			{
				printf("\nMatrix multiplication of %d X %d matrix and %d X %d matrix is not possible.\n", r1, c1, r2, c2);
			}
		}
		break;
		
		case 4:
		{
			if (r1!=c1)
			{
				printf("\nDeterminant of %d X %d matrix cannot be calculated.\n", r1, c1);
			}
			else
			{
				float determinant;
				printf("\nMat(A) = ");
			    for (i=0; i<r1; i++)
			    {
				    for (j=0; j<c1; j++)
				    {
					    printf("%.2f ", mata[i][j]);
				    }
				    printf("\n\t     ");
			    }
				if (r1==1)
				{
					printf("\nDeterminant = %.2f", mata[0][0]);
				}
				else if (r1==2)
				{
					determinant = mata[0][0] * mata[1][1] - mata[0][1] * mata[1][0];
					printf("\nDeterminant = %.2f", determinant);
				}
				else if (r1==3)
				{
					determinant = mata[0][0] * (mata[1][1] * mata[2][2] - mata[1][2] * mata[2][1]) - mata[0][1] * (mata[1][0] * mata[2][2] - mata[1][2] * mata[2][0]) + mata[0][2] * (mata[1][0] * mata[2][1] - mata[1][1] * mata[2][0]);
					printf("\nDeterminant = %.2f", determinant);
				}
				else if (r1==4)
				{
					determinant = mata[0][0] * (mata[1][1] * (mata[2][2] * mata[3][3] - mata[2][3] * mata[3][2]) - mata[1][2] * (mata[2][1] * mata[3][3] - mata[2][3] * mata[3][1]) + mata[1][3] * (mata[2][1] * mata[3][2] - mata[2][2] * mata[3][1])) - mata[0][1] * (mata[1][0] * (mata[2][2] * mata[3][3] - mata[2][3] * mata[3][2]) - mata[1][2] * (mata[2][0] * mata[3][3] - mata[2][3] * mata[3][0]) + mata[1][3] * (mata[2][0] * mata[3][2] - mata[2][2] * mata[3][0])) + mata[0][2] * (mata[1][0] * (mata[2][1] * mata[3][3] - mata[2][3] * mata[3][1]) - mata[1][1] * (mata[2][0] * mata[3][3] - mata[2][3] * mata[3][0]) + mata[1][3] * (mata[2][0] * mata[3][1] - mata[2][1] * mata[3][0])) - mata[0][3] * (mata[1][0] * (mata[2][1] * mata[3][2] - mata[2][2] * mata[3][1]) - mata[1][1] * (mata[2][0] * mata[3][2] - mata[2][2] * mata[3][0]) + mata[1][2] * (mata[2][0] * mata[3][1] - mata[2][1] * mata[3][0]));
					printf("\nDeterminant = %.2f", determinant);
				}
				else 
				{
					printf ("\n\tSorry! The determinant of %d X %d matrix cannot be calculated using this program.", r1, c1);
				}
			}
		}
		break;
		
		case 5:
		{
			if (r1!=c1)
			{
				printf("\nInverse of a %d X %d matrix is non-existent.\n", r1, c1);
			}
			else
			{
			  
				float m[r1][c1], cf[r1][c1], transpose[r1][c1], inverse[r1][c1], determinant;
				if (r1==2)
				{
					determinant = mata[0][0] * mata[1][1] - mata[0][1] * mata[1][0];
					if (determinant!=0)
					{
					  printf("\nMat(A) = ");
			      for (i=0; i<r1; i++)
			      {
				      for (j=0; j<c1; j++)
				      {
					      printf("%.2f ", mata[i][j]);
				      }
				      printf("\n\t     ");
			      }
						m[0][0] = mata[1][1];
						m[0][1] = mata[1][0];
						m[1][0] = mata[0][1];
						m[1][1] = mata[0][0];
						printf("\nMinor(A) = ");
			      for (i=0; i<r1; i++)
			      {
				      for (j=0; j<c1; j++)
				      {
					      printf("%.2f ", m[i][j]);
				      }
				      printf("\n\t       ");
			      }
						for(i=0; i<r1; i++)
						{
							for(j=0; j<c1; j++)
							{
								cf[i][j] = m[i][j] * pow(-1, i+j);
								if (cf[i][j]==-0)
								{
									cf[i][j]=0;
								}
 							}
						}
						printf("\nCF(A) = ");
			      for (i=0; i<r1; i++)
			      {
				      for (j=0; j<c1; j++)
				      {
					      printf("%.2f ", cf[i][j]);
				      }
				      printf("\n\t    ");
			      }
						for(i=0; i<r1; i++)
						{
							for(j=0; j<c1; j++)
							{
								transpose[i][j] = cf[j][i];
 							}
						}
						printf("\nTranspose(A) = ");
			      for (i=0; i<r1; i++)
			      {
				      for (j=0; j<c1; j++)
				      {
					      printf("%.2f ", transpose[i][j]);
				      }
				      printf("\n\t           ");
			      }
						for(i=0; i<r1; i++)
						{
							for(j=0; j<c1; j++)
							{
								inverse[i][j] = transpose[i][j] / determinant;
 							}
						}
						printf ("\nDeterminant = %.2f\n", determinant);
						printf("\nMat(A)^(-1) = ");
						for(i=0; i<r1; i++)
						{
							for(j=0; j<c1; j++)
							{
								printf("%.2f ", inverse[i][j]);
 							}
							printf("\n\t          ");
						}
					}
					else
					{
						printf("\n\tDeterminant is 0, so inverse of the matrix cannot be calculated.\n");
					}
				}
				else if (r1==3)
				{
					determinant = mata[0][0] * (mata[1][1] * mata[2][2] - mata[1][2] * mata[2][1]) - mata[0][1] * (mata[1][0] * mata[2][2] - mata[1][2] * mata[2][0]) + mata[0][2] * (mata[1][0] * mata[2][1] - mata[1][1] * mata[2][0]);
					if (determinant!=0)
					{
					  
						m[0][0] = mata[1][1] * mata[2][2] - mata[1][2] * mata[2][1];
						m[0][1] = mata[1][0] * mata[2][2] - mata[1][2] * mata[2][0];
						m[0][2] = mata[1][0] * mata[2][1] - mata[1][1] * mata[2][0];
						m[1][0] = mata[0][1] * mata[2][2] - mata[2][1] * mata[0][2];
						m[1][1] = mata[0][0] * mata[2][2] - mata[0][2] * mata[2][0];
						m[1][2] = mata[0][0] * mata[2][1] - mata[2][0] * mata[0][1];
						m[2][0] = mata[0][1] * mata[1][2] - mata[0][2] * mata[1][1];
						m[2][1] = mata[0][0] * mata[1][2] - mata[0][2] * mata[1][0];
						m[2][2] = mata[0][0] * mata[1][1] - mata[0][1] * mata[1][0];
						printf("\nMinor(A) = ");
			      for (i=0; i<r1; i++)
			      {
				      for (j=0; j<c1; j++)
				      {
					      printf("%.2f ", m[i][j]);
				      }
				      printf("\n\t       ");
			      }
						for(i=0; i<r1; i++)
						{
							for(j=0; j<c1; j++)
							{
								cf[i][j] = m[i][j] * pow(-1, i+j);
								if (cf[i][j]==-0)
								{
									cf[i][j]=0;
								}
 							}
						}
						printf("\nCF(A) = ");
			      for (i=0; i<r1; i++)
			      {
				      for (j=0; j<c1; j++)
				      {
					      printf("%.2f ", cf[i][j]);
				      }
				      printf("\n\t    ");
			      }
						for(i=0; i<r1; i++)
						{
							for(j=0; j<c1; j++)
							{
								transpose[i][j] = cf[j][i];
 							}
						}
						printf("\nTranspose(A) = ");
			      for (i=0; i<r1; i++)
			      {
				      for (j=0; j<c1; j++)
				      {
					      printf("%.2f ", transpose[i][j]);
				      }
				      printf("\n\t           ");
			      }
						for(i=0; i<r1; i++)
						{
							for(j=0; j<c1; j++)
							{
								inverse[i][j] = transpose[i][j] / determinant;
								if (inverse[i][j]==-0)
								{
									inverse[i][j]=0;
								}
 							}
						}
						printf ("\nDeterminant = %.2f\n", determinant);
						printf("\nMat(A)^(-1) = ");
						for(i=0; i<r1; i++)
						{
							for(j=0; j<c1; j++)
							{
								printf("%.2f ", inverse[i][j]);
 							}
							printf("\n\t          ");
						}
					}
					else
					{
						printf("\n\tDeterminant is 0, so inverse of the matrix cannot be calculated.\n");
					}
				}
				else
				{
					printf("\n\tSorry! The determinant of the entered %d X %d matrix cannot be calculated by this program.\n", r1, c1);
				}
			}
		}
		break;
		
		case 6:
    {
      if (r1==2)
			{
				printf("\nMat(A) = ");
			  for (i=0; i<r1; i++)
			  {
				  for (j=0; j<c1; j++)
				  {
					  printf("%.2f ", mata[i][j]);
				  }
				  printf("\n\t     ");
			  }
				int rank_flag=0;
				if (mata[0][0]==1)
				{
					float a=mata[1][0];
					for(i=0; i<c1; i++)
					{
						mata[1][i] = mata[1][i] - a * mata[0][i];
					}
					for(i=0; i<c1; i++)
					{
						if (mata[1][i]==0)
						{
							rank_flag++;
						}
					}
					printf("\nMat(A') = ");
			    for (i=0; i<r1; i++)
			    {
				    for (j=0; j<c1; j++)
				    {
					    printf("%.2f ", mata[i][j]);
				    }
				    printf("\n\t      ");
			    }
					if(rank_flag==c1)
					{
						printf("\nRank = 1");
					}
					else
					{
						printf("\nRank = 2");
					}
				}
				else
				{
					float a=mata[0][0];
					for(i=0; i<c1; i++)
					{
						mata[0][i]=mata[0][i]/a;
					}
					a=mata[1][0];
					for(i=0; i<c1; i++)
					{
						mata[1][i] = mata[1][i] - a * mata[0][i];
					}
					for(i=0; i<c1; i++)
					{
						if (mata[1][i]==0)
						{
							rank_flag++;
						}
					}
					printf("\nMat(A') = ");
			    for (i=0; i<r1; i++)
			    {
				    for (j=0; j<c1; j++)
				    {
						  printf ("%.2f ", mata[i][j]);
				    }
				        printf("\n\t      ");
			        }
					if(rank_flag==c1)
					{
						printf("\nRank = 1");
					}
					else
					{
						printf("\nRank = 2");
					}
				}
			}
			else if (r1==3)
			{
			  printf("\nMat(A) = ");
			  for (i=0; i<r1; i++)
			  {
				  for (j=0; j<c1; j++)
				  {
					  printf("%.2f ", mata[i][j]);
				  }
				  printf("\n\t     ");
			  }
				int rank_flag1=0, rank_flag2=0;
				float a=mata[1][0], b=mata[2][0];
				if (mata[0][0]==1)
				{
				  for(i=0; i<c1; i++)
					{
						mata[1][i] = mata[1][i] - a * mata[0][i];
						mata[2][i] = mata[2][i] - b * mata[0][i];
					}
					for(i=0; i<c1; i++)
					{
						if (mata[1][i]==0)
						{
							rank_flag1++;
						}	
					}
					for(i=0; i<c1; i++)
					{
						if (mata[2][i]==0)
						{
							rank_flag2++;
						}	
					}
					printf("\nMat(A') = ");
			    for (i=0; i<r1; i++)
			    {
				    for (j=0; j<c1; j++)
				    {
							if (mata[i][j]==-0)
							{
								mata[i][j]=0;
							}
					    printf("%.2f ", mata[i][j]);
				    }
				    printf("\n\t      ");
			    }
					if (rank_flag1==c1&&rank_flag2==c1)
					{
						printf("\nRank = 1");
					}
					else if (rank_flag1==c1)
					{
						printf("\nRank = 2");
					}
					else if (rank_flag2==c1)
					{
						printf("\nRank = 2");
					}
					else
					{
						printf("\nRank = 3");
					}
				}
				else
				{
					float a=mata[0][0];
					for(i=0; i<c1; i++)
					{
						mata[0][i]=mata[0][i]/a;
					}
					float b=mata[2][0];
					a=mata[1][0];
					for(i=0; i<c1; i++)
					{
						mata[1][i] = mata[1][i] - a * mata[0][i];
						mata[2][i] = mata[2][i] - b * mata[0][i];
					}
					for(i=0; i<c1; i++)
					{
						if (mata[1][i]==0)
						{
							rank_flag1++;
						}	
					}
					for(i=0; i<c1; i++)
					{
						if (mata[2][i]==0)
						{
							rank_flag2++;
						}	
					}
					printf("\nMat(A') = ");
			        for (i=0; i<r1; i++)
			        {
				        for (j=0; j<c1; j++)
				        {
							if (mata[i][j]==-0)
							{
								mata[i][j]=0;
							}
					        printf("%.2f ", mata[i][j]);
				        }
				        printf("\n\t      ");
			        }
					if (rank_flag1==c1&&rank_flag2==c1)
					{
						printf("\nRank = 1");
					}
					else if (rank_flag1==c1)
					{
						printf("\nRank = 2");
					}
					else if (rank_flag2==c1)
					{
						printf("\nRank = 2");
					}
					else
					{
						printf("\nRank = 3");
					}
				}
			}
			else 
			{
				printf("\nSorry the rank of the entered matrix cannot be calculated using this program.\n");
			}
		}			
		break;
		
		case 7:
		{
			if (r1!=c1)
			{
				printf("\nEigen values of %d X %d matrix cannot be calculated.\n", r1, c1);
			}
			else
			{
			  printf("\nMat(A) = ");
			  for (i=0; i<r1; i++)
			  {
				  for (j=0; j<c1; j++)
				  {
					  printf("%.2f ", mata[i][j]);
				  }
				  printf("\n\t     ");
			  }
				float determinant, s1, s2;
				if (r1==2)
				{
					determinant = mata[0][0] * mata[1][1] - mata[0][1] * mata[1][0];
					s1 = mata[0][0] + mata[1][1];
					printf ("\nS1 = %.2f\n", s1);
          printf ("\nCharacteristic Equation ---> λ² - (%.2f)λ + (%.2f) = 0\n", s1, determinant);
					printf("\nEigen values = ");
					for (i=-20; i<20; i++)
					{
						if(i*i - s1*i + determinant == 0)
						{
							printf("%d ", i);
						}
					}
				}
				else if (r1==3)
				{
					determinant = mata[0][0] * (mata[1][1] * mata[2][2] - mata[1][2] * mata[2][1]) - mata[0][1] * (mata[1][0] * mata[2][2] - mata[1][2] * mata[2][0]) + mata[0][2] * (mata[1][0] * mata[2][1] - mata[1][1] * mata[2][0]);
					s1 = mata[0][0] + mata[1][1] + mata[2][2];
				    s2 = mata[1][1]*mata[2][2] - mata[1][2]*mata[2][1] + mata[0][0]*mata[2][2] - mata[0][2]*mata[2][0] + mata[0][0]*mata[1][1] - mata[0][1]*mata[1][0];
				    printf ("\nS1 = %.2f", s1);
				    printf ("\nS2 = %.2f", s2);
				    printf ("\nDeterminant = %.2f\n", determinant);
            printf ("\nCharacteristic Equation ---> λ³ - (%.2f)λ² + (%.2f)λ - (%.2f) = 0\n", s1, s2, determinant);
				    printf("\nEigen Values = ");
					for (i=-20; i<21; i++)
					{
						if(pow(i, 3) - s1*pow(i, 2) + s2*i - determinant == 0)
						{
							printf("%d ", i);
						}
					}
				}
				else 
				{
					printf ("Sorry! The eigen values of %d X %d matrix cannot be calculated using this program.", r1, c1);
				}
			}
		}
		break;
		
		default:
		printf("\nPlease enter a valid option.");
		goto line17;
		break;
	}
	return 0;
}
