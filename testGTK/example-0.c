#include <gtk/gtk.h>

static void activate (GtkApplication* app, gpointer user_data)
{
    GtkWidget *window;
    // 新建窗体
    window = gtk_application_window_new (app);
    // 窗体标题
    gtk_window_set_title (GTK_WINDOW (window), "Window");
    // 窗体大小
    gtk_window_set_default_size (GTK_WINDOW (window), 800, 600);
    gtk_widget_show_all (window);
}

int main (int argc,char **argv)
{
    // main方法主要的目的是创建GtkApplication对象并运行
    GtkApplication *app;
    int status;

    // 初始化GtkApplication，参数application_id为唯一id，一般取DNS倒序，用于判断GNOME系统中的唯一性
    // G_APPLICATION_FLAGS_NONE是一个枚举类型的常量，用于表示在创建GtkApplication时的应用程序标志。它表示应用程序没有任何特殊的标志或选项。
    // GtkApplication是一个用于创建GTK应用程序的方便类。在创建GtkApplication对象时，可以指定标志来控制应用程序的行为。例如，
    // 可以使用G_APPLICATION_NON_UNIQUE标志来允许多个应用程序实例运行。
    // 可以使用G_APPLICATION_HANDLES_OPEN标志来指示应用程序能够打开文件。
    // 如果在创建GtkApplication对象时不需要任何特殊的标志或选项，则可以使用G_APPLICATION_FLAGS_NONE来表示这一点。
    app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);

    // 使用g_signal_connect函数将activate函数与"activate"信号连接起来。
    // 当应用程序启动并准备好显示时，GtkApplication会发出"activate"信号，这时activate函数会被调用。
    g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);

    // 使用g_application_run函数运行GtkApplication。该函数接受GtkApplication对象、命令行参数的数量和命令行参数的值作为参数。
    // 它会启动主循环并等待事件的发生，直到应用程序退出。当应用程序退出时，g_application_run函数将返回一个整数值，表示应用程序的退出状态。
    status = g_application_run (G_APPLICATION (app), argc, argv);

    // 窗口关闭后，status返回0
    printf("result is %d",status);

    // 释放窗口所占用的内存
    g_object_unref (app);
    return status;
}
