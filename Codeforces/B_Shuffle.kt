fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val n = readLine()!!.toInt()
        print(1)
        for (i in n downTo 2) {
            print(" $i")
        }
        println()
    }
}
