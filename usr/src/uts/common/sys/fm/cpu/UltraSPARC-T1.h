/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License, Version 1.0 only
 * (the "License").  You may not use this file except in compliance
 * with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */
/*
 * Copyright 2005 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

#ifndef _SYS_FM_ULTRASPARC_T1_H
#define	_SYS_FM_ULTRASPARC_T1_H

#pragma ident	"%Z%%M%	%I%	%E% SMI"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * header file for Niagara-specific ereports
 */

#define	FM_EREPORT_PAYLOAD_NAME_L2_AFSR		"l2-afsr"
#define	FM_EREPORT_PAYLOAD_NAME_L2_REAL_AFAR	"l2-real-afar"
#define	FM_EREPORT_PAYLOAD_NAME_L2_SYND		"l2-synd"

#define	FM_EREPORT_PAYLOAD_NAME_DRAM_AFSR	"dram-afsr"
#define	FM_EREPORT_PAYLOAD_NAME_DRAM_REAL_AFAR	"dram-real-afar"
#define	FM_EREPORT_PAYLOAD_NAME_DRAM_SYND	"dram-synd"

#define	FM_EREPORT_CPU_UST1_DAU			"dau"
#define	FM_EREPORT_CPU_UST1_DAC			"dac"
#define	FM_EREPORT_CPU_UST1_DSU			"dsu"
#define	FM_EREPORT_CPU_UST1_DSC			"dsc"

#ifdef __cplusplus
}
#endif

#endif /* _SYS_FM_ULTRASPARC_T1_H */