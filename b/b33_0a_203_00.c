ChLayout(4);
BGOpen("fp510",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
ScrFadeIn(0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B330A20300_02_000");
MsgDisp("Sassa","First, let's go on 
that water slide.");
MsgDisp("主人公","Yeah!");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B330A20300_06_000");
MsgDisp("Himuro","Sounds good.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("B330A20300_01_000");
MsgDisp("Kazama","Fine, let's go.");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChClose(1,0,0);
ChClose(6,0,0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3,1);
ChPosition(2,0);
ScrFadeIn(0);
MsgDisp("主人公","Phew, that was super fun!");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("B330A20300_02_010");
MsgDisp("Sassa","Haha,
that was a great splash!");
MsgDisp("主人公","Yeah, did you see it?");
SEPlay("EV_SE_631");
MsgDisp("","(*SPLASH*)");
MsgDisp("主人公","Ehh∋　That sound was so loud!");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("B330A20300_02_020");
MsgDisp("Sassa","O-i,
are you two alright?");
SEPlay("EV_SE_571");
Wait(20,0);
MsgClose();
ChClose(2,0,30);
ChLayout(4);
ChOpen(2,31,0,0,3,-1,-1,0,3,0,30);
ChOpen(1,31,0,2,0,-1,-1,0,3,0,30);
ChOpen(6,31,0,0,0,-1,-1,0,3,0,30);
SEWait();
VoicePlay("B330A20300_01_010");
MsgDisp("Kazama","Inori came up just behind me.
It was a close call.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("B330A20300_06_010");
MsgDisp("Himuro","Ryota-senpai was slow.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("B330A20300_01_020");
MsgDisp("Kazama","That doesn't mean you should
tailgate me on the waterslide.");
MsgDisp("主人公","Then, next time sbould 
we change the order?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330A20300_06_020");
MsgDisp("Himuro","As long as I'm not 
behind Ryota-senpai.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B330A20300_01_030");
MsgDisp("Kazama","...Geez, 
what's up with that, Inori.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B330A20300_02_030");
MsgDisp("Sassa","I still want to go first but...
If we have to change....
Then, you can go first.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B330A20300_02_040");
MsgDisp("Sassa","Ryota can go second.
I'll go after, then Inori is last.
Is that okay?");
MsgDisp("主人公","Hehe, it's like a relay team.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3,1);
VoicePlay("B330A20300_01_040");
MsgDisp("Kazama","Sassa, listen up.
This isn't a game of tag.
Don't chase me alright?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("B330A20300_02_050");
MsgDisp("Sassa","Got it.
Why would I even chase you?
Come on, let's go∈");
MsgClose();
SEPlay("EV_SE_562",0,0.5);
SEPlay("EV_SE_563",0,0.7);
ChClose(2,0,30);
ChClose(6,0,30);
ChPosition(1,3);
Wait(40,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("B330A20300_01_050");
MsgDisp("Kazama","He's kind of not credible...");
SEPlay("EV_SE_562");
MsgClose();
ChClose(1,0,30);
MsgDisp("主人公","(Seems like ｛風真＊＊｝
really hates being 
chased by ｛颯砂＊＊｝?)");
BGMStop();
SEStop("EV_SE_562",1);
MsgClose();
ScrFadeOut(0);
ChLayout(2);
ChOpen(2,253,7,0,0,-1,-1,0,0,0,0);
ChPosition(2,3);
ChOpen(1,253,7,0,0,-1,-1,0,0,0,0);
ChPosition(1,3);
ChOpen(6,253,7,0,0,-1,-1,0,0,0,0);
ChPosition(6,3);
