--- a/io/copy_file_range.c
+++ b/io/copy_file_range.c
@@ -43,7 +43,7 @@ copy_range_help(void)
 }
 
 static loff_t
-copy_file_range(int fd, loff_t *src, loff_t *dst, size_t len)
+copy_file_range_cmd(int fd, loff_t *src, loff_t *dst, size_t len)
 {
 	loff_t ret;
 
@@ -130,7 +130,7 @@ copy_range_f(int argc, char **argv)
 		copy_dst_truncate();
 	}
 
-	ret = copy_file_range(fd, &src, &dst, len);
+	ret = copy_file_range_cmd(fd, &src, &dst, len);
 	close(fd);
 	return ret;
 }
