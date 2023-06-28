#ifndef RSWITCH_REGS_H
#define RSWITCH_REGS_H

#define RSWITCH_BASE            0xE68C0000

#define RSWITCH_FWD_ADDR      (RSWITCH_BASE + 0x00000000)
#define RSWITCH_FAB_ADDR      (RSWITCH_BASE + 0x00008000)
#define RSWITCH_COMA_ADDR     (RSWITCH_BASE + 0x00009000)
#define RSWITCH_ETHA0_ADDR    (RSWITCH_BASE + 0x0000a000)
#define RSWITCH_ETHA1_ADDR    (RSWITCH_BASE + 0x0000c000)
#define RSWITCH_ETHA2_ADDR    (RSWITCH_BASE + 0x0000e000)
#define RSWITCH_GWCA0_ADDR    (RSWITCH_BASE + 0x00010000)
#define RSWITCH_GWCA1_ADDR    (RSWITCH_BASE + 0x00012000)
#define RSWITCH_GPTP_ADDR     (RSWITCH_BASE + 0x00018000)

#define FWRO    0
#define CARO    0
#define GWRO    0
#define TARO    0
#define RMRO    0x1000

#define FWGC        (FWRO + 0x0000)
#define FWTTC0      (FWRO + 0x0010)
#define FWTTC1      (FWRO + 0x0014)
#define FWLBMC      (FWRO + 0x0018)
#define FWCEPTC     (FWRO + 0x020)
#define FWCEPRC0        (FWRO + 0x024)
#define FWCEPRC1        (FWRO + 0x028)
#define FWCEPRC2        (FWRO + 0x02C)
#define FWCLPTC     (FWRO + 0x030)
#define FWCLPRC     (FWRO + 0x034)
#define FWCMPTC     (FWRO + 0x040)
#define FWEMPTC     (FWRO + 0x044)
#define FWSDMPTC        (FWRO + 0x050)
#define FWSDMPVC        (FWRO + 0x054)
#define FWLBWMC0        (FWRO + 0x080)
#define FWPC00      (FWRO + 0x100)
#define FWPC10      (FWRO + 0x104)
#define FWPC20      (FWRO + 0x108)
#define FWCTGC00        (FWRO + 0x400)
#define FWCTGC10        (FWRO + 0x404)
#define FWCTTC00        (FWRO + 0x408)
#define FWCTTC10        (FWRO + 0x40C)
#define FWCTTC200       (FWRO + 0x410)
#define FWCTSC00        (FWRO + 0x420)
#define FWCTSC10        (FWRO + 0x424)
#define FWCTSC20        (FWRO + 0x428)
#define FWCTSC30        (FWRO + 0x42C)
#define FWCTSC40        (FWRO + 0x430)
#define FWTWBFC0        (FWRO + 0x1000)
#define FWTWBFVC0       (FWRO + 0x1004)
#define FWTHBFC0        (FWRO + 0x1400)
#define FWTHBFV0C0      (FWRO + 0x1404)
#define FWTHBFV1C0      (FWRO + 0x1408)
#define FWFOBFC0        (FWRO + 0x1800)
#define FWFOBFV0C0      (FWRO + 0x1804)
#define FWFOBFV1C0      (FWRO + 0x1808)
#define FWRFC0      (FWRO + 0x1C00)
#define FWRFVC0     (FWRO + 0x1C04)
#define FWCFC0      (FWRO + 0x2000)
#define FWCFMC00        (FWRO + 0x2004)
#define FWIP4SC     (FWRO + 0x4008)
#define FWIP6SC     (FWRO + 0x4018)
#define FWIP6OC     (FWRO + 0x401C)
#define FWL2SC      (FWRO + 0x4020)
#define FWSFHEC     (FWRO + 0x4030)
#define FWSHCR0     (FWRO + 0x4040)
#define FWSHCR1     (FWRO + 0x4044)
#define FWSHCR2     (FWRO + 0x4048)
#define FWSHCR3     (FWRO + 0x404C)
#define FWSHCR4     (FWRO + 0x4050)
#define FWSHCR5     (FWRO + 0x4054)
#define FWSHCR6     (FWRO + 0x4058)
#define FWSHCR7     (FWRO + 0x405C)
#define FWSHCR8     (FWRO + 0x4060)
#define FWSHCR9     (FWRO + 0x4064)
#define FWSHCR10        (FWRO + 0x4068)
#define FWSHCR11        (FWRO + 0x406C)
#define FWSHCR12        (FWRO + 0x4070)
#define FWSHCR13        (FWRO + 0x4074)
#define FWSHCRR     (FWRO + 0x4078)
#define FWLTHHEC        (FWRO + 0x4090)
#define FWLTHHC     (FWRO + 0x4094)
#define FWLTHTL0        (FWRO + 0x40A0)
#define FWLTHTL1        (FWRO + 0x40A4)
#define FWLTHTL2        (FWRO + 0x40A8)
#define FWLTHTL3        (FWRO + 0x40AC)
#define FWLTHTL4        (FWRO + 0x40B0)
#define FWLTHTL5        (FWRO + 0x40B4)
#define FWLTHTL6        (FWRO + 0x40B8)
#define FWLTHTL7        (FWRO + 0x40BC)
#define FWLTHTL80       (FWRO + 0x40C0)
#define FWLTHTL9        (FWRO + 0x40D0)
#define FWLTHTLR        (FWRO + 0x40D4)
#define FWLTHTIM        (FWRO + 0x40E0)
#define FWLTHTEM        (FWRO + 0x40E4)
#define FWLTHTS0        (FWRO + 0x4100)
#define FWLTHTS1        (FWRO + 0x4104)
#define FWLTHTS2        (FWRO + 0x4108)
#define FWLTHTS3        (FWRO + 0x410C)
#define FWLTHTS4        (FWRO + 0x4110)
#define FWLTHTSR0       (FWRO + 0x4120)
#define FWLTHTSR1       (FWRO + 0x4124)
#define FWLTHTSR2       (FWRO + 0x4128)
#define FWLTHTSR3       (FWRO + 0x412C)
#define FWLTHTSR40      (FWRO + 0x4130)
#define FWLTHTSR5       (FWRO + 0x4140)
#define FWLTHTR     (FWRO + 0x4150)
#define FWLTHTRR0       (FWRO + 0x4154)
#define FWLTHTRR1       (FWRO + 0x4158)
#define FWLTHTRR2       (FWRO + 0x415C)
#define FWLTHTRR3       (FWRO + 0x4160)
#define FWLTHTRR4       (FWRO + 0x4164)
#define FWLTHTRR5       (FWRO + 0x4168)
#define FWLTHTRR6       (FWRO + 0x416C)
#define FWLTHTRR7       (FWRO + 0x4170)
#define FWLTHTRR8       (FWRO + 0x4174)
#define FWLTHTRR9       (FWRO + 0x4180)
#define FWLTHTRR10      (FWRO + 0x4190)
#define FWIPHEC     (FWRO + 0x4214)
#define FWIPHC      (FWRO + 0x4218)
#define FWIPTL0     (FWRO + 0x4220)
#define FWIPTL1     (FWRO + 0x4224)
#define FWIPTL2     (FWRO + 0x4228)
#define FWIPTL3     (FWRO + 0x422C)
#define FWIPTL4     (FWRO + 0x4230)
#define FWIPTL5     (FWRO + 0x4234)
#define FWIPTL6     (FWRO + 0x4238)
#define FWIPTL7     (FWRO + 0x4240)
#define FWIPTL8     (FWRO + 0x4250)
#define FWIPTLR     (FWRO + 0x4254)
#define FWIPTIM     (FWRO + 0x4260)
#define FWIPTEM     (FWRO + 0x4264)
#define FWIPTS0     (FWRO + 0x4270)
#define FWIPTS1     (FWRO + 0x4274)
#define FWIPTS2     (FWRO + 0x4278)
#define FWIPTS3     (FWRO + 0x427C)
#define FWIPTS4     (FWRO + 0x4280)
#define FWIPTSR0        (FWRO + 0x4284)
#define FWIPTSR1        (FWRO + 0x4288)
#define FWIPTSR2        (FWRO + 0x428C)
#define FWIPTSR3        (FWRO + 0x4290)
#define FWIPTSR4        (FWRO + 0x42A0)
#define FWIPTR      (FWRO + 0x42B0)
#define FWIPTRR0        (FWRO + 0x42B4)
#define FWIPTRR1        (FWRO + 0x42B8)
#define FWIPTRR2        (FWRO + 0x42BC)
#define FWIPTRR3        (FWRO + 0x42C0)
#define FWIPTRR4        (FWRO + 0x42C4)
#define FWIPTRR5        (FWRO + 0x42C8)
#define FWIPTRR6        (FWRO + 0x42CC)
#define FWIPTRR7        (FWRO + 0x42D0)
#define FWIPTRR8        (FWRO + 0x42E0)
#define FWIPTRR9        (FWRO + 0x42F0)
#define FWIPHLEC        (FWRO + 0x4300)
#define FWIPAGUSPC      (FWRO + 0x4500)
#define FWIPAGC     (FWRO + 0x4504)
#define FWIPAGM0        (FWRO + 0x4510)
#define FWIPAGM1        (FWRO + 0x4514)
#define FWIPAGM2        (FWRO + 0x4518)
#define FWIPAGM3        (FWRO + 0x451C)
#define FWIPAGM4        (FWRO + 0x4520)
#define FWMACHEC        (FWRO + 0x4620)
#define FWMACHC     (FWRO + 0x4624)
#define FWMACTL0        (FWRO + 0x4630)
#define FWMACTL1        (FWRO + 0x4634)
#define FWMACTL2        (FWRO + 0x4638)
#define FWMACTL3        (FWRO + 0x463C)
#define FWMACTL4        (FWRO + 0x4640)
#define FWMACTL5        (FWRO + 0x4650)
#define FWMACTLR        (FWRO + 0x4654)
#define FWMACTIM        (FWRO + 0x4660)
#define FWMACTEM        (FWRO + 0x4664)
#define FWMACTS0        (FWRO + 0x4670)
#define FWMACTS1        (FWRO + 0x4674)
#define FWMACTSR0       (FWRO + 0x4678)
#define FWMACTSR1       (FWRO + 0x467C)
#define FWMACTSR2       (FWRO + 0x4680)
#define FWMACTSR3       (FWRO + 0x4690)
#define FWMACTR     (FWRO + 0x46A0)
#define FWMACTRR0       (FWRO + 0x46A4)
#define FWMACTRR1       (FWRO + 0x46A8)
#define FWMACTRR2       (FWRO + 0x46AC)
#define FWMACTRR3       (FWRO + 0x46B0)
#define FWMACTRR4       (FWRO + 0x46B4)
#define FWMACTRR5       (FWRO + 0x46C0)
#define FWMACTRR6       (FWRO + 0x46D0)
#define FWMACHLEC       (FWRO + 0x4700)
#define FWMACAGUSPC     (FWRO + 0x4880)
#define FWMACAGC        (FWRO + 0x4884)
#define FWMACAGM0       (FWRO + 0x4888)
#define FWMACAGM1       (FWRO + 0x488C)
#define FWVLANTEC       (FWRO + 0x4900)
#define FWVLANTL0       (FWRO + 0x4910)
#define FWVLANTL1       (FWRO + 0x4914)
#define FWVLANTL2       (FWRO + 0x4918)
#define FWVLANTL3       (FWRO + 0x4920)
#define FWVLANTL4       (FWRO + 0x4930)
#define FWVLANTLR       (FWRO + 0x4934)
#define FWVLANTIM       (FWRO + 0x4940)
#define FWVLANTEM       (FWRO + 0x4944)
#define FWVLANTS        (FWRO + 0x4950)
#define FWVLANTSR0      (FWRO + 0x4954)
#define FWVLANTSR1      (FWRO + 0x4958)
#define FWVLANTSR2      (FWRO + 0x4960)
#define FWVLANTSR3      (FWRO + 0x4970)
#define FWPBFCi     (FWRO + 0x4A00)
#define FWPBFCSDC00     (FWRO + 0x4A04)
#define FWL23URL0       (FWRO + 0x4E00)
#define FWL23URL1       (FWRO + 0x4E04)
#define FWL23URL2       (FWRO + 0x4E08)
#define FWL23URL3       (FWRO + 0x4E0C)
#define FWL23URLR       (FWRO + 0x4E10)
#define FWL23UTIM       (FWRO + 0x4E20)
#define FWL23URR        (FWRO + 0x4E30)
#define FWL23URRR0      (FWRO + 0x4E34)
#define FWL23URRR1      (FWRO + 0x4E38)
#define FWL23URRR2      (FWRO + 0x4E3C)
#define FWL23URRR3      (FWRO + 0x4E40)
#define FWL23URMC0      (FWRO + 0x4F00)
#define FWPMFGC0        (FWRO + 0x5000)
#define FWPGFC0     (FWRO + 0x5100)
#define FWPGFIGSC0      (FWRO + 0x5104)
#define FWPGFENC0       (FWRO + 0x5108)
#define FWPGFENM0       (FWRO + 0x510c)
#define FWPGFCSTC00     (FWRO + 0x5110)
#define FWPGFCSTC10     (FWRO + 0x5114)
#define FWPGFCSTM00     (FWRO + 0x5118)
#define FWPGFCSTM10     (FWRO + 0x511C)
#define FWPGFCTC0       (FWRO + 0x5120)
#define FWPGFCTM0       (FWRO + 0x5124)
#define FWPGFHCC0       (FWRO + 0x5128)
#define FWPGFSM0        (FWRO + 0x512C)
#define FWPGFGC0        (FWRO + 0x5130)
#define FWPGFGL0        (FWRO + 0x5500)
#define FWPGFGL1        (FWRO + 0x5504)
#define FWPGFGLR        (FWRO + 0x5518)
#define FWPGFGR     (FWRO + 0x5510)
#define FWPGFGRR0       (FWRO + 0x5514)
#define FWPGFGRR1       (FWRO + 0x5518)
#define FWPGFRIM        (FWRO + 0x5520)
#define FWPMTRFC0       (FWRO + 0x5600)
#define FWPMTRCBSC0     (FWRO + 0x5604)
#define FWPMTRC0RC0     (FWRO + 0x5608)
#define FWPMTREBSC0     (FWRO + 0x560C)
#define FWPMTREIRC0     (FWRO + 0x5610)
#define FWPMTRFM0       (FWRO + 0x5614)
#define FWFTL0      (FWRO + 0x6000)
#define FWFTL1      (FWRO + 0x6004)
#define FWFTLR      (FWRO + 0x6008)
#define FWFTOC      (FWRO + 0x6010)
#define FWFTOPC     (FWRO + 0x6014)
#define FWFTIM      (FWRO + 0x6020)
#define FWFTR       (FWRO + 0x6030)
#define FWFTRR0     (FWRO + 0x6034)
#define FWFTRR1     (FWRO + 0x6038)
#define FWFTRR2     (FWRO + 0x603C)
#define FWSEQNGC0       (FWRO + 0x6100)
#define FWSEQNGM0       (FWRO + 0x6104)
#define FWSEQNRC        (FWRO + 0x6200)
#define FWCTFDCN0       (FWRO + 0x6300)
#define FWLTHFDCN0      (FWRO + 0x6304)
#define FWIPFDCN0       (FWRO + 0x6308)
#define FWLTWFDCN0      (FWRO + 0x630C)
#define FWPBFDCN0       (FWRO + 0x6310)
#define FWMHLCN0        (FWRO + 0x6314)
#define FWIHLCN0        (FWRO + 0x6318)
#define FWICRDCN0       (FWRO + 0x6500)
#define FWWMRDCN0       (FWRO + 0x6504)
#define FWCTRDCN0       (FWRO + 0x6508)
#define FWLTHRDCN0      (FWRO + 0x650C)
#define FWIPRDCN0       (FWRO + 0x6510)
#define FWLTWRDCN0      (FWRO + 0x6514)
#define FWPBRDCN0       (FWRO + 0x6518)
#define FWPMFDCN0       (FWRO + 0x6700)
#define FWPGFDCN0       (FWRO + 0x6780)
#define FWPMGDCN0       (FWRO + 0x6800)
#define FWPMYDCN0       (FWRO + 0x6804)
#define FWPMRDCN0       (FWRO + 0x6808)
#define FWFRPPCN0       (FWRO + 0x6A00)
#define FWFRDPCN0       (FWRO + 0x6A04)
#define FWEIS00     (FWRO + 0x7900)
#define FWEIE00     (FWRO + 0x7904)
#define FWEID00     (FWRO + 0x7908)
#define FWEIS1      (FWRO + 0x7A00)
#define FWEIE1      (FWRO + 0x7A04)
#define FWEID1      (FWRO + 0x7A08)
#define FWEIS2      (FWRO + 0x7A10)
#define FWEIE2      (FWRO + 0x7A14)
#define FWEID2      (FWRO + 0x7A18)
#define FWEIS3      (FWRO + 0x7A20)
#define FWEIE3      (FWRO + 0x7A24)
#define FWEID3      (FWRO + 0x7A28)
#define FWEIS4      (FWRO + 0x7A30)
#define FWEIE4      (FWRO + 0x7A34)
#define FWEID4      (FWRO + 0x7A38)
#define FWEIS5      (FWRO + 0x7A40)
#define FWEIE5      (FWRO + 0x7A44)
#define FWEID5      (FWRO + 0x7A48)
#define FWEIS60     (FWRO + 0x7A50)
#define FWEIE60     (FWRO + 0x7A54)
#define FWEID60     (FWRO + 0x7A58)
#define FWEIS61     (FWRO + 0x7A60)
#define FWEIE61     (FWRO + 0x7A64)
#define FWEID61     (FWRO + 0x7A68)
#define FWEIS62     (FWRO + 0x7A70)
#define FWEIE62     (FWRO + 0x7A74)
#define FWEID62     (FWRO + 0x7A78)
#define FWEIS63     (FWRO + 0x7A80)
#define FWEIE63     (FWRO + 0x7A84)
#define FWEID63     (FWRO + 0x7A88)
#define FWEIS70     (FWRO + 0x7A90)
#define FWEIE70     (FWRO + 0x7A94)
#define FWEID70     (FWRO + 0x7A98)
#define FWEIS71     (FWRO + 0x7AA0)
#define FWEIE71     (FWRO + 0x7AA4)
#define FWEID71     (FWRO + 0x7AA8)
#define FWEIS72     (FWRO + 0x7AB0)
#define FWEIE72     (FWRO + 0x7AB4)
#define FWEID72     (FWRO + 0x7AB8)
#define FWEIS73     (FWRO + 0x7AC0)
#define FWEIE73     (FWRO + 0x7AC4)
#define FWEID73     (FWRO + 0x7AC8)
#define FWEIS80     (FWRO + 0x7AD0)
#define FWEIE80     (FWRO + 0x7AD4)
#define FWEID80     (FWRO + 0x7AD8)
#define FWEIS81     (FWRO + 0x7AE0)
#define FWEIE81     (FWRO + 0x7AE4)
#define FWEID81     (FWRO + 0x7AE8)
#define FWEIS82     (FWRO + 0x7AF0)
#define FWEIE82     (FWRO + 0x7AF4)
#define FWEID82     (FWRO + 0x7AF8)
#define FWEIS83     (FWRO + 0x7B00)
#define FWEIE83     (FWRO + 0x7B04)
#define FWEID83     (FWRO + 0x7B08)
#define FWMIS0      (FWRO + 0x7C00)
#define FWMIE0      (FWRO + 0x7C04)
#define FWMID0      (FWRO + 0x7C08)
#define FWSCR0      (FWRO + 0x7D00)
#define FWSCR1      (FWRO + 0x7D04)
#define FWSCR2      (FWRO + 0x7D08)
#define FWSCR3      (FWRO + 0x7D0C)
#define FWSCR4      (FWRO + 0x7D10)
#define FWSCR5      (FWRO + 0x7D14)
#define FWSCR6      (FWRO + 0x7D18)
#define FWSCR7      (FWRO + 0x7D1C)
#define FWSCR8      (FWRO + 0x7D20)
#define FWSCR9      (FWRO + 0x7D24)
#define FWSCR10     (FWRO + 0x7D28)
#define FWSCR11     (FWRO + 0x7D2C)
#define FWSCR12     (FWRO + 0x7D30)
#define FWSCR13     (FWRO + 0x7D34)
#define FWSCR14     (FWRO + 0x7D38)
#define FWSCR15     (FWRO + 0x7D3C)
#define FWSCR16     (FWRO + 0x7D40)
#define FWSCR17     (FWRO + 0x7D44)
#define FWSCR18     (FWRO + 0x7D48)
#define FWSCR19     (FWRO + 0x7D4C)
#define FWSCR20     (FWRO + 0x7D50)
#define FWSCR21     (FWRO + 0x7D54)
#define FWSCR22     (FWRO + 0x7D58)
#define FWSCR23     (FWRO + 0x7D5C)
#define FWSCR24     (FWRO + 0x7D60)
#define FWSCR25     (FWRO + 0x7D64)
#define FWSCR26     (FWRO + 0x7D68)
#define FWSCR27     (FWRO + 0x7D6C)
#define FWSCR28     (FWRO + 0x7D70)
#define FWSCR29     (FWRO + 0x7D74)
#define FWSCR30     (FWRO + 0x7D78)
#define FWSCR31     (FWRO + 0x7D7C)
#define FWSCR32     (FWRO + 0x7D80)
#define FWSCR33     (FWRO + 0x7D84)
#define FWSCR34     (FWRO + 0x7D88)
#define FWSCR35     (FWRO + 0x7D8C)
#define FWSCR36     (FWRO + 0x7D90)
#define FWSCR37     (FWRO + 0x7D94)
#define FWSCR38     (FWRO + 0x7D98)
#define FWSCR39     (FWRO + 0x7D9C)
#define FWSCR40     (FWRO + 0x7DA0)
#define FWSCR41     (FWRO + 0x7DA4)
#define FWSCR42     (FWRO + 0x7DA8)
#define FWSCR43     (FWRO + 0x7DAC)
#define FWSCR44     (FWRO + 0x7DB0)
#define FWSCR45     (FWRO + 0x7DB4)
#define FWSCR46     (FWRO + 0x7DB8)

#define RIPV        (CARO + 0x0000)
#define RRC     (CARO + 0x0004)
#define RCEC        (CARO + 0x0008)
#define RCDC        (CARO + 0x000C)
#define RSSIS       (CARO + 0x0010)
#define RSSIE       (CARO + 0x0014)
#define RSSID       (CARO + 0x0018)
#define CABPIBWMC       (CARO + 0x0020)
#define CABPWMLC        (CARO + 0x0040)
#define CABPPFLC0       (CARO + 0x0050)
#define CABPPWMLC0      (CARO + 0x0060)
#define CABPPPFLC00     (CARO + 0x00A0)
#define CABPULC     (CARO + 0x0100)
#define CABPIRM     (CARO + 0x0140)
#define CABPPCM     (CARO + 0x0144)
#define CABPLCM     (CARO + 0x0148)
#define CABPCPM     (CARO + 0x0180)
#define CABPMCPM        (CARO + 0x0200)
#define CARDNM      (CARO + 0x0280)
#define CARDMNM     (CARO + 0x0284)
#define CARDCN      (CARO + 0x0290)
#define CAEIS0      (CARO + 0x0300)
#define CAEIE0      (CARO + 0x0304)
#define CAEID0      (CARO + 0x0308)
#define CAEIS1      (CARO + 0x0310)
#define CAEIE1      (CARO + 0x0314)
#define CAEID1      (CARO + 0x0318)
#define CAMIS0      (CARO + 0x0340)
#define CAMIE0      (CARO + 0x0344)
#define CAMID0      (CARO + 0x0348)
#define CAMIS1      (CARO + 0x0350)
#define CAMIE1      (CARO + 0x0354)
#define CAMID1      (CARO + 0x0358)
#define CASCR       (CARO + 0x0380)

/* Ethernet Agent Address space Empty in spec */
#define EAMC        (TARO + 0x0000)
#define EAMS        (TARO + 0x0004)
#define EAIRC       (TARO + 0x0010)
#define EATDQSC     (TARO + 0x0014)
#define EATDQC      (TARO + 0x0018)
#define EATDQAC     (TARO + 0x001C)
#define EATPEC      (TARO + 0x0020)
#define EATMFSC0        (TARO + 0x0040)
#define EATDQDC0        (TARO + 0x0060)
#define EATDQM0     (TARO + 0x0080)
#define EATDQMLM0       (TARO + 0x00A0)
#define EACTQC      (TARO + 0x0100)
#define EACTDQDC        (TARO + 0x0104)
#define EACTDQM     (TARO + 0x0108)
#define EACTDQMLM       (TARO + 0x010C)
#define EAVCC       (TARO + 0x0130)
#define EAVTC       (TARO + 0x0134)
#define EATTFC      (TARO + 0x0138)
#define EACAEC      (TARO + 0x0200)
#define EACC        (TARO + 0x0204)
#define EACAIVC0        (TARO + 0x0220)
#define EACAULC0        (TARO + 0x0240)
#define EACOEM      (TARO + 0x0260)
#define EACOIVM0        (TARO + 0x0280)
#define EACOULM0        (TARO + 0x02A0)
#define EACGSM      (TARO + 0x02C0)
#define EATASC      (TARO + 0x0300)
#define EATASENC0       (TARO + 0x0320)
#define EATASCTENC      (TARO + 0x0340)
#define EATASENM0       (TARO + 0x0360)
#define EATASCTENM      (TARO + 0x0380)
#define EATASCSTC0      (TARO + 0x03A0)
#define EATASCSTC1      (TARO + 0x03A4)
#define EATASCSTM0      (TARO + 0x03A8)
#define EATASCSTM1      (TARO + 0x03AC)
#define EATASCTC        (TARO + 0x03B0)
#define EATASCTM        (TARO + 0x03B4)
#define EATASGL0        (TARO + 0x03C0)
#define EATASGL1        (TARO + 0x03C4)
#define EATASGLR        (TARO + 0x03C8)
#define EATASGR     (TARO + 0x03D0)
#define EATASGRR        (TARO + 0x03D4)
#define EATASHCC        (TARO + 0x03E0)
#define EATASRIRM       (TARO + 0x03E4)
#define EATASSM     (TARO + 0x03E8)
#define EAUSMFSECN      (TARO + 0x0400)
#define EATFECN     (TARO + 0x0404)
#define EAFSECN     (TARO + 0x0408)
#define EADQOECN        (TARO + 0x040C)
#define EADQSECN        (TARO + 0x0410)
#define EACKSECN        (TARO + 0x0414)
#define EAEIS0      (TARO + 0x0500)
#define EAEIE0      (TARO + 0x0504)
#define EAEID0      (TARO + 0x0508)
#define EAEIS1      (TARO + 0x0510)
#define EAEIE1      (TARO + 0x0514)
#define EAEID1      (TARO + 0x0518)
#define EAEIS2      (TARO + 0x0520)
#define EAEIE2      (TARO + 0x0524)
#define EAEID2      (TARO + 0x0528)
#define EASCR       (TARO + 0x0580)

#define MPSM        (RMRO + 0x0000)
#define MPIC        (RMRO + 0x0004)
#define MPIM        (RMRO + 0x0008)
#define MIOC        (RMRO + 0x0010)
#define MIOM        (RMRO + 0x0014)
#define MXMS        (RMRO + 0x0018)
#define MTFFC       (RMRO + 0x0020)
#define MTPFC       (RMRO + 0x0024)
#define MTPFC2      (RMRO + 0x0028)
#define MTPFC30     (RMRO + 0x0030)
#define MTATC0      (RMRO + 0x0050)
#define MTIM        (RMRO + 0x0060)
#define MRGC        (RMRO + 0x0080)
#define MRMAC0      (RMRO + 0x0084)
#define MRMAC1      (RMRO + 0x0088)
#define MRAFC       (RMRO + 0x008C)
#define MRSCE       (RMRO + 0x0090)
#define MRSCP       (RMRO + 0x0094)
#define MRSCC       (RMRO + 0x0098)
#define MRFSCE      (RMRO + 0x009C)
#define MRFSCP      (RMRO + 0x00a0)
#define MTRC        (RMRO + 0x00a4)
#define MRIM        (RMRO + 0x00a8)
#define MRPFM       (RMRO + 0x00aC)
#define MPFC0       (RMRO + 0x0100)
#define MLVC        (RMRO + 0x0180)
#define MEEEC       (RMRO + 0x0184)
#define MLBC        (RMRO + 0x0188)
#define MXGMIIC     (RMRO + 0x0190)
#define MPCH        (RMRO + 0x0194)
#define MANC        (RMRO + 0x0198)
#define MANM        (RMRO + 0x019C)
#define MPLCA1      (RMRO + 0x01a0)
#define MPLCA2      (RMRO + 0x01a4)
#define MPLCA3      (RMRO + 0x01a8)
#define MPLCA4      (RMRO + 0x01ac)
#define MPLCAM      (RMRO + 0x01b0)
#define MHDC1       (RMRO + 0x01c0)
#define MHDC2       (RMRO + 0x01c4)
#define MEIS        (RMRO + 0x0200)
#define MEIE        (RMRO + 0x0204)
#define MEID        (RMRO + 0x0208)
#define MMIS0       (RMRO + 0x0210)
#define MMIE0       (RMRO + 0x0214)
#define MMID0       (RMRO + 0x0218)
#define MMIS1       (RMRO + 0x0220)
#define MMIE1       (RMRO + 0x0224)
#define MMID1       (RMRO + 0x0228)
#define MMIS2       (RMRO + 0x0230)
#define MMIE2       (RMRO + 0x0234)
#define MMID2       (RMRO + 0x0238)
#define MMPFTCT     (RMRO + 0x0300)
#define MAPFTCT     (RMRO + 0x0304)
#define MPFRCT      (RMRO + 0x0308)
#define MFCICT      (RMRO + 0x030c)
#define MEEECT      (RMRO + 0x0310)
#define MMPCFTCT0       (RMRO + 0x0320)
#define MAPCFTCT0       (RMRO + 0x0330)
#define MPCFRCT0        (RMRO + 0x0340)
#define MHDCC       (RMRO + 0x0350)
#define MROVFC      (RMRO + 0x0354)
#define MRHCRCEC        (RMRO + 0x0358)
#define MRXBCE      (RMRO + 0x0400)
#define MRXBCP      (RMRO + 0x0404)
#define MRGFCE      (RMRO + 0x0408)
#define MRGFCP      (RMRO + 0x040C)
#define MRBFC       (RMRO + 0x0410)
#define MRMFC       (RMRO + 0x0414)
#define MRUFC       (RMRO + 0x0418)
#define MRPEFC      (RMRO + 0x041C)
#define MRNEFC      (RMRO + 0x0420)
#define MRFMEFC     (RMRO + 0x0424)
#define MRFFMEFC        (RMRO + 0x0428)
#define MRCFCEFC        (RMRO + 0x042C)
#define MRFCEFC     (RMRO + 0x0430)
#define MRRCFEFC        (RMRO + 0x0434)
#define MRUEFC      (RMRO + 0x043C)
#define MROEFC      (RMRO + 0x0440)
#define MRBOEC      (RMRO + 0x0444)
#define MTXBCE      (RMRO + 0x0500)
#define MTXBCP      (RMRO + 0x0504)
#define MTGFCE      (RMRO + 0x0508)
#define MTGFCP      (RMRO + 0x050C)
#define MTBFC       (RMRO + 0x0510)
#define MTMFC       (RMRO + 0x0514)
#define MTUFC       (RMRO + 0x0518)
#define MTEFC       (RMRO + 0x051C)

#define GWMC        (GWRO + 0x0000)
#define GWMS        (GWRO + 0x0004)
#define GWIRC       (GWRO + 0x0010)
#define GWRDQSC     (GWRO + 0x0014)
#define GWRDQC      (GWRO + 0x0018)
#define GWRDQAC     (GWRO + 0x001C)
#define GWRGC       (GWRO + 0x0020)
#define GWRMFSC0        (GWRO + 0x0040)
#define GWRDQDC0        (GWRO + 0x0060)
#define GWRDQM0     (GWRO + 0x0080)
#define GWRDQMLM0       (GWRO + 0x00A0)
#define GWMTIRM     (GWRO + 0x0100)
#define GWMSTLS     (GWRO + 0x0104)
#define GWMSTLR     (GWRO + 0x0108)
#define GWMSTSS     (GWRO + 0x010C)
#define GWMSTSR     (GWRO + 0x0110)
#define GWMAC0      (GWRO + 0x0120)
#define GWMAC1      (GWRO + 0x0124)
#define GWVCC       (GWRO + 0x0130)
#define GWVTC       (GWRO + 0x0134)
#define GWTTFC      (GWRO + 0x0138)
#define GWTDCAC00       (GWRO + 0x0140)
#define GWTDCAC10       (GWRO + 0x0144)
#define GWTSDCC0        (GWRO + 0x0160)
#define GWTNM       (GWRO + 0x0180)
#define GWTMNM      (GWRO + 0x0184)
#define GWAC        (GWRO + 0x0190)
#define GWDCBAC0        (GWRO + 0x0194)
#define GWDCBAC1        (GWRO + 0x0198)
#define GWIICBSC        (GWRO + 0x019C)
#define GWMDNC      (GWRO + 0x01A0)
#define GWTRC0      (GWRO + 0x0200)
#define GWTPC0      (GWRO + 0x0300)
#define GWARIRM     (GWRO + 0x0380)
#define GWDCC0      (GWRO + 0x0400)
#define GWAARSS     (GWRO + 0x0800)
#define GWAARSR0        (GWRO + 0x0804)
#define GWAARSR1        (GWRO + 0x0808)
#define GWIDAUAS0       (GWRO + 0x0840)
#define GWIDASM0        (GWRO + 0x0880)
#define GWIDASAM00      (GWRO + 0x0900)
#define GWIDASAM10      (GWRO + 0x0904)
#define GWIDACAM00      (GWRO + 0x0980)
#define GWIDACAM10      (GWRO + 0x0984)
#define GWGRLC      (GWRO + 0x0A00)
#define GWGRLULC        (GWRO + 0x0A04)
#define GWRLIVC0        (GWRO + 0x0A80)
#define GWRLULC0        (GWRO + 0x0A84)
#define GWIDPC      (GWRO + 0x0B00)
#define GWIDC0      (GWRO + 0x0C00)
#define GWDIS0      (GWRO + 0x1100)
#define GWDIE0      (GWRO + 0x1104)
#define GWDID0      (GWRO + 0x1108)
#define GWTSDIS     (GWRO + 0x1180)
#define GWTSDIE     (GWRO + 0x1184)
#define GWTSDID     (GWRO + 0x1188)
#define GWEIS0      (GWRO + 0x1190)
#define GWEIE0      (GWRO + 0x1194)
#define GWEID0      (GWRO + 0x1198)
#define GWEIS1      (GWRO + 0x11A0)
#define GWEIE1      (GWRO + 0x11A4)
#define GWEID1      (GWRO + 0x11A8)
#define GWEIS20     (GWRO + 0x1200)
#define GWEIE20     (GWRO + 0x1204)
#define GWEID20     (GWRO + 0x1208)
#define GWEIS3      (GWRO + 0x1280)
#define GWEIE3      (GWRO + 0x1284)
#define GWEID3      (GWRO + 0x1288)
#define GWEIS4      (GWRO + 0x1290)
#define GWEIE4      (GWRO + 0x1294)
#define GWEID4      (GWRO + 0x1298)
#define GWEIS5      (GWRO + 0x12A0)
#define GWEIE5      (GWRO + 0x12A4)
#define GWEID5      (GWRO + 0x12A8)
#define GWSCR0      (GWRO + 0x1800)
#define GWSCR1      (GWRO + 0x1900)

/* COMA */
#define RRC_RR		BIT(0)
#define RRC_RR_CLR	(0)
#define RCEC_RCE	BIT(16)
#define RCDC_RCD	BIT(16)

#define CABPIRM_BPIOG	BIT(0)
#define CABPIRM_BPR	BIT(1)

#endif /* RSWITCH_REGS_H */