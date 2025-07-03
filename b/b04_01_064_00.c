BGOpen("wf700",2);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040106400_01_000");
MsgDisp("Kazama","It's been over 10 years.");
MsgDisp("主人公","And this is the first time we've
ever come here together.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B040106400_01_010");
MsgDisp("Kazama","Well, you know.
It's not like I could take you out
when I was in kindergarten.");
MsgDisp("主人公","Hehe.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
VoicePlay("B040106400_01_020");
MsgDisp("Kazama","So you know what? Today I'm making up for
10 years of lost time.");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B040106400_01_030");
MsgDisp("Kazama","That's right, I'm buying a ton of things
at these stalls!");
MsgDisp("主人公","Hehe, just like I'd expect from you.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,0);
ChEyeOpenLevel(1,7);
VoicePlay("B040106400_01_040");
MsgDisp("Kazama","What's that supposed to mean?");
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B040106400_01_050");
MsgDisp("Kazama","Say what you want, don't be shy about it.");
MsgDisp("主人公","Hehe, in that case...
From here all the way to over there,
I want it all!");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B040106400_01_060");
MsgDisp("Kazama","Well, I said to, right? No regrets now.");
MsgClose();
SEPlay("EV_SE_568");
ChClose(1);
SEWait();
VoicePlay("B040106400_01_070");
MsgDisp("Kazama","Excuse me.
One candied apple, please.");
VoicePlay("B040106400_36_000");
MsgDisp("Night Market Clerk","Right away!　... Oh?
You're Mr. Kazama's boy!
Alright, this is on the house!");
VoicePlay("B040106400_01_080");
MsgDisp("Kazama","Oh, thank you very much.");
MsgDisp("主人公","(｛風真＊＊｝ 's popularity
is seriously amazing...)");
SEPlay("EV_SE_625");
SEWait();
SEPlay("EV_SE_022",0.3,0.8);
MsgClose();
ChOpen(1,33,0,0,0,-1,-1,0,0);
ChEye(1,3);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("B040106400_01_090");
MsgDisp("Kazama","Crud, it's starting.
We'll have to buy up everything later.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B040106400_01_100");
MsgDisp("Kazama","The candied apple guy
told me about a good place to watch
from. Let's go.");
MsgClose();
SEPlay("EV_SE_568");
ChClose(1);
MsgDisp("主人公","Oh, okay!");
SEPlay("EV_SE_672");
MsgClose();
ScrFadeOut(0,0);
SEWait();
