BGOpen("fp000",0);
ChLayout(2);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ScrFadeIn(0);
MsgDisp("主人公","Hmm, it feels nice huh...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B330A10400_01_000");
MsgDisp("Kazama","Right?
It's calming no matter 
when you come here.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("B330A10400_02_000");
MsgDisp("Sassa","Should we go for a run around the pond?");
ChEye(1,0);
ChMouth(1,2);
ChEyeOpenLevel(1,8);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
VoicePlay("B330A10400_06_000");
MsgDisp("Himuro","I'll wait here.");
MsgDisp("主人公","Hehe.
I'm also not dressed for running.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,2);
VoicePlay("B330A10400_02_010");
MsgDisp("Sassa","Then...
Shall we go on a rowboat?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B330A10400_01_010");
MsgDisp("Kazama","Ohh, sounds good.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("B330A10400_06_010");
MsgDisp("Himuro","I don't mind?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B330A10400_06_020");
MsgDisp("Himuro","But, the boats are mostly two-person.");
ChMotion(1,0);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,1);
VoicePlay("B330A10400_02_020");
MsgDisp("Sassa","Alright, let's do a
rock-paper-scissors match.");
MsgDisp("主人公","Eh? Match?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B330A10400_06_030");
MsgDisp("Himuro","You should watch to
see there's no cheating.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
VoicePlay("B330A10400_01_020");
MsgDisp("Kazama","Of course the person who's most 
likely to use a sly hand would say that.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,4);
VoicePlay("B330A10400_06_040");
MsgDisp("Himuro","Using your hand is
different to being sly.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("B330A10400_02_030");
MsgDisp("Sassa","How would you use your head
in rock-paper scissors!
...Shall we go?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(1,0,30);
SEPlay("EV_SE_756");
ChClose(2,0,30);
ChClose(6,0,30);
VoicePlay("B330A10400_01_030");
VoicePlay("B330A10400_02_040");
VoicePlay("B330A10400_06_050");
MsgDisp("Everyone","Okay, first rock—, paper,— 
scissors!");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp000",1);
MsgClose();
ChOpen(1,255,0,0,3,-1,-1,0,3,0,30);
ChOpen(2,255,0,0,4,-1,-1,0,3,0,30);
ChOpen(6,255,0,0,4,-1,-1,0,3,0,30);
ScrFadeIn(0);
VoicePlay("B330A10400_02_050");
MsgDisp("Sassa","Haa...
We spend the whole day on the boats today.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B330A10400_06_060");
MsgDisp("Himuro","Right.
But, I think it was wise.");
MsgDisp("主人公","Hehe, yeah.
It was fun to ride it so many times!");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B330A10400_01_040");
MsgDisp("Kazama","Well yeah. Once with you, and twice with
the other guys. I feel like there were a
lot of negatives though.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("B330A10400_02_060");
MsgDisp("Sassa","If only I took a picture of Inori
and Ryota's lovey dovey boat.");
ChEye(1,0);
ChMouth(1,2);
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B330A10400_06_070");
MsgDisp("Himuro","Nah, really you should have 
taken a picture of Nozomu-senpai
and Ryota's swan boat.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B330A10400_06_080");
MsgDisp("Himuro","I've never seen a swan boat 
move at such a high speed...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B330A10400_02_070");
MsgDisp("Sassa","That was some good exercise.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B330A10400_01_050");
MsgDisp("Kazama","I'm drenched in sweat.");
MsgDisp("主人公","(Hehe!
No matter what they say, I'm glad
they all get along so well.)");
MsgClose();
ScrFadeOut(0,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,7);
ChEyeOpenLevel(1,-1);
ChMouthOpenLevel(1,-1);
ChCheek(1,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,7);
ChEyeOpenLevel(2,-1);
ChMouthOpenLevel(2,-1);
ChCheek(2,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,7);
ChEyeOpenLevel(6,-1);
ChMouthOpenLevel(6,-1);
ChCheek(6,0);
