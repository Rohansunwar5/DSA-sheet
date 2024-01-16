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