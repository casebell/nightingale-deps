/* GStreamer
 * Copyright (C) <2010> Wim Taymans <wim.taymans@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __GST_RTP_G722_PAY_H__
#define __GST_RTP_G722_PAY_H__

#include <gst/gst.h>
#include <gst/rtp/gstrtpbaseaudiopayload.h>

G_BEGIN_DECLS

#define GST_TYPE_RTP_G722_PAY \
  (gst_rtp_g722_pay_get_type())
#define GST_RTP_G722_PAY(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),GST_TYPE_RTP_G722_PAY,GstRtpG722Pay))
#define GST_RTP_G722_PAY_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),GST_TYPE_RTP_G722_PAY,GstRtpG722PayClass))
#define GST_IS_RTP_G722_PAY(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),GST_TYPE_RTP_G722_PAY))
#define GST_IS_RTP_G722_PAY_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),GST_TYPE_RTP_G722_PAY))

typedef struct _GstRtpG722Pay GstRtpG722Pay;
typedef struct _GstRtpG722PayClass GstRtpG722PayClass;

struct _GstRtpG722Pay
{
  GstRTPBaseAudioPayload payload;

  gint rate;
  gint channels;
};

struct _GstRtpG722PayClass
{
  GstRTPBaseAudioPayloadClass parent_class;
};

GType gst_rtp_g722_pay_get_type (void);

gboolean gst_rtp_g722_pay_plugin_init (GstPlugin * plugin);

G_END_DECLS

#endif /* __GST_RTP_G722_PAY_H__ */
