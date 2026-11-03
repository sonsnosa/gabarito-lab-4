// somatório de 1 a 100
int soma = 0; 
for (int i = 1; i <= 100; i++) { 
    soma += i; 
} 
printf("Soma = %d\n", soma);

// fatorial
int n; long long fatorial = 1; 
scanf("%d", &n); 
for (int i = 1; i <= n; i++) { 
    fatorial *= i; 
} 
printf("%lld\n", fatorial);