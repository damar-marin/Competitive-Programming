import java.util.*

fun solve() {
    val n = readLine()!!.toInt()
    val a = readLine()!!.split(" ").map { it.toInt() }.toMutableList()

    a.sort()

    var ans = (a[0] + a[1]) / 2

    for (i in 2 until n) {
        ans = (ans + a[i]) / 2
    }

    println(ans)
}

fun main() {
    val t = readLine()!!.toInt()

    repeat(t) {
        solve()
    }
}
