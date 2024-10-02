import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    
    var t = scanner.nextInt()
    
    while (t-- > 0) {
        val a = scanner.nextInt()
        val b = scanner.nextInt()

        val c = (a + b) / 2

        val ans = (c - a) + (b - c)

        println(ans)
    }
}
