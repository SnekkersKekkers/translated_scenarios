MsgType(0);
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("T040320000_03_000");
MsgDisp("Honda","That's right! Do you remember some time
ago when Ryou-kun, Mi-kun and I waved to
you from the rooftop?");
MsgClose();
StlOpen("ev_03_21");
BGMPlay("BGM_PROLOGUE",0.01);
Wait(120);
ScrFadeIn(0);
Wait(60);
MsgDisp("主人公","(Who's telepathy told me that...)");
VoicePlay("T040320000_03_010");
MsgDisp("Honda","Perhaps, it was mine.");
VoicePlay("T040320000_04_000");
MsgDisp("Nanatsumori","And how do you know?");
VoicePlay("T040320000_03_020");
MsgDisp("Honda","It's simple. I mean, Mi-kun doesn't speak
loudly at school, do you? And Ryou-kun is
too cool looking.");
VoicePlay("T040320000_01_000");
MsgDisp("Kazama","What do you mean by 'cool-looking'?
And it's not a matter of making the most
noise in the first place?");
VoicePlay("T040320000_04_010");
MsgDisp("Nanatsumori","Right.");
VoicePlay("T040320000_03_030");
MsgDisp("Honda","Eh?
Your voice is usually quiet, but maybe it
gets louder only when you're telepathic?");
VoicePlay("T040320000_04_020");
MsgDisp("Nanatsumori","Haa...
I'm starting to get confused.");
MsgClose();
BGMStop(5);
ScrFadeOut(0,0,300);
StlClose();
VoicePlay("T040320000_03_040");
MsgDisp("Honda","Did my voice reach her after all?");
MsgClose();
ScrFadeOut(0,0,300);
Wait(300,0);
