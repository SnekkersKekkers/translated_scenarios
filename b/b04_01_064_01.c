BGOpen("wf700",2);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040106401_01_000");
MsgDisp("Kazama","It's a lot of fun here.");
MsgDisp("主人公","Yeah, everyone seems to be having
a great time.");
ChMouth(1,0);
VoicePlay("B040106401_01_010");
MsgDisp("Kazama","And what about you?");
MsgDisp("主人公","Hehe, I'm having fun too.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("B040106401_01_020");
MsgDisp("Kazama","In that case, good.");
MsgDisp("主人公","Hehe. And you?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B040106401_01_030");
MsgDisp("Kazama","You're standing out even more than usual,
so it does have me a little worried.");
MsgDisp("主人公","Umm...");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B040106401_01_040");
MsgDisp("Kazama","Do you get it? There's a lot of people out
here very excited, so being too far away
is prohibited.");
VoicePlay("B040106401_39_000");
MsgDisp("Night Market Clerk","Oh, it's the younger Kazama!
C'mere, come over here!");
ChEye(1,5);
ChMouth(1,1);
ChMotion(1,5);
VoicePlay("B040106401_01_050");
MsgDisp("Kazama","Eh, wait!
Please don't tug on me...!");
MsgClose();
SEPlay("EV_SE_568");
ChClose(1,0,30);
VoicePlay("B040106401_39_010");
MsgDisp("Night Market Clerk","Here, this is our speciality yakisoba.
Just for the young master.");
SEWait();
MsgDisp("主人公","(Hehe, they call him young master.)");
VoicePlay("B040106401_39_020");
MsgDisp("Night Market Clerk","... And by the way, is that girl over
there the future mistress?");
MsgDisp("主人公","Huh?");
VoicePlay("B040106401_01_060");
MsgDisp("Kazama","That's right.");
MsgDisp("主人公","Huuuuh∋");
SEPlay("EV_SE_022",0.3,0.8);
Wait(80,0);
SEPlay("EV_SE_628");
Wait(30,0);
MsgClose();
ChOpen(1,33,0,0,3,-1,-1,7,0,0,30);
ChMotion(1,1);
VoicePlay("B040106401_01_070");
MsgDisp("Kazama","Let's go, it's starting. I just got told a
great spot to watch from. Over here.");
MsgDisp("主人公","Er, yeah.");
MsgClose();
SEPlay("EV_SE_626");
ChClose(1);
MsgDisp("主人公","(Future mistress...
That made my heart pound a bit.)");
MsgClose();
ScrFadeOut(0,0);
