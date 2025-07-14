EnvAutoSet(1);
BGOpen("wf000",0);
ScrFadeIn(0);
MsgDisp("主人公","(I wonder what I should write about for
the next Habacha Column......
Okay, first let's explore the city!)");
SEPlay("EV_SE_569",0.2,0.5);
Wait(30,0);
MsgDisp("主人公","(......Huh? It seems crowded over there.
Let's check it out.)");
SEStop("EV_SE_569",1);
MsgClose();
ScrFadeOut(0);
EnvAutoSet(0);
BGOpen("wf230",0);
EnvPlay("SE_ENV_BG_WF231_CO0",0);
ScrFadeIn(0);
MsgDisp("主人公","(Ah......
They've built a new sculpture!)");
BGOpen("wf231",0);
MsgDisp("主人公","(Wow, beautiful......)");
VoicePlay("D210020001_46_000");
MsgDisp("Woman A","That sculpture makes a sound when you
touch it!");
VoicePlay("D210020001_47_000");
MsgDisp("Woman B","Yeah! It's said that you can predict your
love life with the sound it makes.");
MsgDisp("主人公","............");
MsgDisp("主人公","(I guess I should try to touch it?
......Let's give it a shot.)");
SEPlay("EV_SE_517");
Wait(110,0);
MsgDisp("主人公","(! What a beautiful sound......Is that a
good sign?)");
SEStop("EV_SE_517",2);
MsgDisp("主人公","(Yep, this is a perfect date spot.
A new trendy spot, \"The Wharf\", I'll go
back now and write an article about it!)");
MsgClose();
EnvAutoSet(1);
ScrFadeOut(0);
