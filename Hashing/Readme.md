- [16:21](https://www.youtube.com/watch?v=KEs5UyBJ39g&t=16m21s) 🔄 **Hashing Overview:**

  - Hashing involves pre-storing and fetching values for efficient retrieval during queries.

- [17:42](https://www.youtube.com/watch?v=KEs5UyBJ39g&t=17m42s) 📊 **Hash Array Size:**

  - Declare a hash array size based on the maximum possible array element. For a range up to 10^6, declare it inside main; for 10^7 or more, declare globally.

- [18:50](https://www.youtube.com/watch?v=KEs5UyBJ39g&t=18m50s) 🚫 **Memory Limitations:**

  - Memory limitations apply when declaring arrays; for integers, 10^6 inside main, and 10^7 globally are typical limits.

- [13:50](https://www.youtube.com/watch?v=KEs5UyBJ39g&t=13m50s) 🧠 **Hashing Implementation:**

  - Implement hashing by pre-computing a hash array based on the input array, enabling efficient retrieval of element frequencies during queries.

- [21:35](https://www.youtube.com/watch?v=KEs5UyBJ39g&t=21m35s) 🌐 **Beyond 10^7:**

  - For scenarios requiring larger arrays (e.g., 10^9), alternative data structures or techniques beyond basic arrays are necessary, to be explored in the later part of the video.

  - [21:50](https://youtu.be/KEs5UyBJ39g?t=1310s) 🧠 Learned number hashing using arrays for problem-solving.

- [22:17](https://youtu.be/KEs5UyBJ39g?t=1337s) 📊 Character hashing involves counting occurrences using arrays; hashing can optimize this process.
- [25:02](https://youtu.be/KEs5UyBJ39g?t=1502s) 🔄 Hashing characters using arrays: map characters to indexes by subtracting 'a' (lowercase) or 'A' (uppercase) using ASCII values.
- [30:22](https://youtu.be/KEs5UyBJ39g?t=1822s) 📚 Understanding how to use arrays for character hashing in C++, ensuring exclusive lowercase or both cases by array size.
- [42:02](https://youtu.be/KEs5UyBJ39g?t=2522s) ⏱️ Introducing maps for efficient character hashing in C++; discussing the logarithmic time complexity for storing and fetching in maps.

- [45:22](https://youtu.be/KEs5UyBJ39g?t=2722s) 🕰️ Understanding linear time complexity in hash maps based on the number of elements.
- [46:58](https://youtu.be/KEs5UyBJ39g?t=2818s) 🔄 Use unordered map as the first preference for hash maps due to rare worst-case scenarios caused by internal collisions.
- [47:53](https://youtu.be/KEs5UyBJ39g?t=2873s) 🤔 Explained the division method in hash map creation, involving modulo to handle limited array size.
- [52:24](https://youtu.be/KEs5UyBJ39g?t=3144s) ⛓️ Introducing linear chaining as a solution to collisions in hash maps, demonstrated with an example.
- [57:28](https://youtu.be/KEs5UyBJ39g?t=3448s) 🗝️ Understanding key considerations: Keys can be of various data types, but unordered maps are limited to specific individual types.

02:19 📚 Hashing is one of the most important topics in data structures and algorithms; understanding it is crucial for solving many problems in this field.
05:50 ⏰ The brute-force method to find how many times a number appears involves linear iteration, resulting in a time complexity of O(n) for each query.
08:20 🚀 Hashing is introduced as a technique to optimize the computation of how many times a number appears by pre-storing and fetching the information.
16:07 🧠 The hash array is used for pre-computation, storing the frequency of each number. This allows fetching the answer in constant time rather than linear iteration.
18:50 🤔 When using an array for hashing, the maximum size you can declare is limited to 10^6 inside main or 10^7 globally for integers; beyond that, it may result in a segmentation fault.
21:50 📚 Character hashing using arrays involves mapping characters to array indices using ASCII values, with lowercase characters corresponding to indices 0-25.
28:49 ⚙️ The hashing logic for characters involves calculating the index as (character - 'a') for lowercase letters, facilitating efficient character counting.
34:28 🗺️ Arrays can be replaced by maps for efficient character counting, with the key being the character and the value being the frequency, resulting in a more memory-efficient solution.
43:08 🔄 The time complexity of storing and fetching from maps is logarithmic on average and in the best case, but unordered maps can offer constant time complexity for these operations.
45:22 🕰️ However, unordered maps may have linear time complexity in the worst case, dependent on the number of elements, making them less predictable than maps.
45:51 🕰️ Understanding time complexity in coding: O(1) vs. O(N^2).
46:30 🧠 When faced with time limit exceeded, switch to unordered map; rarely, use map as the worst case seldom occurs.
47:11 🗺️ Explaining the division method in hashing to handle larger numbers within array constraints.
51:28 ⛓️ Collision handling in hashing: Using chaining to manage cases where multiple keys hash to the same index.
56:05 🌌 Worst case scenario in hashing: Extremely rare collisions when all keys end up at the same hash index.
