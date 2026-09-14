# 1. Two Sum

- **Dificultad:** Fácil (Easy)
- **Plataforma:** [LeetCode #1](https://leetcode.com/problems/two-sum/)
- **Lenguaje:** C++
- **Temas:** Arrays, Hash Table

---

## Descripción del Problema

Dado un arreglo de números enteros `nums` y un entero `target`, retorna los **índices de los dos números** de modo que sumen `target`.

Puedes asumir que cada entrada tendrá **exactamente una solución**, y no puedes usar el mismo elemento dos veces.

Puedes retornar la respuesta en cualquier orden.

### Ejemplo 1:
```text
Entrada: nums = [2, 7, 11, 15], target = 9
Salida: [0, 1]
Explicación: nums[0] + nums[1] == 2 + 7 == 9, por lo tanto retornamos [0, 1].
```

### Ejemplo 2:
```text
Entrada: nums = [3, 2, 4], target = 6
Salida: [1, 2]
```

### Ejemplo 3:
```text
Entrada: nums = [3, 3], target = 6
Salida: [0, 1]
```

### Restricciones:
- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- Solo existe una respuesta válida.

---

## Solución 1: Fuerza Bruta (Brute Force)

### Explicación:
Consiste en comparar cada elemento del arreglo con todos los elementos siguientes usando dos bucles anidados (`for`). Para cada par `(nums[i], nums[j])`, se verifica si su suma es igual a `target`.

### Código:
Ver [`twoSum.cpp`](twoSum.cpp).

### Complejidad:
- **Temporal:** $O(n^2)$ — En el peor de los casos se recorren todos los pares posibles.
- **Espacial:** $O(1)$ — No se utiliza memoria adicional significativa, únicamente variables de índice.

---

## 💡 Solución 2: Tabla Hash (Óptima)

### Explicación:
Recorremos el arreglo una sola vez. En cada paso calculamos el complemento necesario (`complement = target - nums[i]`). Con `num_map.contains(complement)` verificamos si ya vimos ese número antes:
- Si ya existe, retornamos de inmediato el índice guardado y el actual.
- Si no existe, guardamos el número actual y su posición en el mapa para futuras consultas.

### Código:
Ver [`twoSumHashMap.cpp`](twoSumHashMap.cpp).

### Complejidad:
- **Temporal:** $O(n)$ — Recorre el arreglo una sola vez. Las búsquedas en la tabla hash toman $O(1)$ promedio.
- **Espacial:** $O(n)$ — Almacena hasta $n$ elementos en la tabla hash en el peor caso.
