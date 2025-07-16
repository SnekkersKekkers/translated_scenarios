BGOpen("wf700",2);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B040406400_04_000");
MsgDisp("Nanatsumori","Hmmー.
Summer really is about festivalsー.");
MsgDisp("主人公","Yeah, that's right.");
VoicePlay("B040406400_04_010");
MsgDisp("Nanatsumori","There are lots of photogenic spots, so
let's take a lot of pictures.");
ChMotion(4,0,1);
VoicePlay("B040406400_04_020");
MsgDisp("Nanatsumori","Actually, I'd like to take some pictures
in yukata and post them on social media,
but that won't be possible.");
MsgDisp("主人公","Why?");
ChEye(4,2);
ChMouth(4,3);
VoicePlay("B040406400_04_030");
MsgDisp("Nanatsumori","Whether I'm Minori Nanatsumori ot Nana, I
can't upload it. And they'll also wonder
who took the picture.");
MsgDisp("主人公","Ah...
I see.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B040406400_04_040");
MsgDisp("Nanatsumori","At least, he's quite well-known around
town.
That \"Nana\" person that is.");
MsgDisp("主人公","Hehe!");
ChEye(4,0);
ChMotion(4,0,1);
VoicePlay("B040406400_04_050");
MsgDisp("Nanatsumori","Well, that's enough talk about work.
Let's enjoy the festival.");
MsgDisp("主人公","ＯＫ！");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
SEPlay("EV_SE_022",1);
Wait(50,0);
MsgDisp("主人公","Ah, looks like the fireworks are starting.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B040406400_04_060");
MsgDisp("Nanatsumori","Right.
Let's go to the main venue.");
MsgDisp("主人公","Yeah!");
SEStop("EV_SE_022",1);
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
SEWait();
