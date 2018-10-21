--- src/wallet/api/wallet.cpp.orig	2018-05-10 19:21:53.808217000 +0300
+++ src/wallet/api/wallet.cpp	2018-05-22 20:22:58.934583000 +0300
@@ -1292,7 +1292,7 @@
         // if auto refresh enabled, we wait for the "m_refreshIntervalSeconds" interval.
         // if not - we wait forever
         if (m_refreshIntervalMillis > 0) {
-            boost::posix_time::milliseconds wait_for_ms(m_refreshIntervalMillis);
+            boost::posix_time::milliseconds wait_for_ms(static_cast<boost::int64_t>(m_refreshIntervalMillis));
             m_refreshCV.timed_wait(lock, wait_for_ms);
         } else {
             m_refreshCV.wait(lock);
