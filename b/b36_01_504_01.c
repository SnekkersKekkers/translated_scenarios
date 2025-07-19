MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex300",2);
BGMPlay("BGM_XMAS_TRHEE",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B360150401_01_000");
MsgDisp("Kazama","There are a lot of couples around this
time of year, huh?");
MsgDisp("主人公","You're right.
It's a bit nerve-wracking.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B360150401_01_010");
MsgDisp("Kazama","Really?
We fit in just fine though.
So it's not an issue."); 
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B360150401_01_020");
MsgDisp("Kazama","Come on, give me your hand.");
MsgDisp("主人公","Eh?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B360150401_01_030");
MsgDisp("Kazama","Don't give me that\"Eh\".
It looks more natural this way, okay?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,4);
VoicePlay("B360150401_01_040");
MsgDisp("Kazama","It would be nice to hold arms too, though.");
MsgDisp("主人公","Let's see...
Give me your paw then.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B360150401_01_050");
MsgDisp("Kazama","What's with that?
I'm not a dog.
...Geez.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,0);
ChMouth(1,3);
SEPlay("EV_SE_504");
SEWait();
VoicePlay("B360150401_01_060");
MsgDisp("Kazama","Come on, let's go.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","Wait, don't pull so hard!");
VoicePlay("B360150401_01_070");
MsgDisp("Kazama","Let's go over there.
There's an even better view.");
MsgDisp("主人公","(Somehow ｛風真＊＊｝ looks like an
excited puppy.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChOpen(1,255,7,0,0,#1,#1,0,0,0,0);
