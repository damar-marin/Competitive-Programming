
fun main() {
    val testCases = readLine()!!.toInt()
 
    repeat(testCases) {
        val arraySize = readLine()!!.toInt()
        val array = readLine()!!.split(" ").map { it.toInt() }.sorted()
 
        if (arraySize >= 2) {
            if (array[arraySize - 1] - array[arraySize - 2] == 1) {
                println(array[arraySize - 2])
            } else {
                println("Ambiguous")
            }
        }
    }
}
