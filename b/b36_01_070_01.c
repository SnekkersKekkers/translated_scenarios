MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ne710",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
ChEyeOpenLevel(1,8);
VoicePlay("B360107001_01_000");
MsgDisp("Kazama","I'll pick up some 
clothes that suit you.");
MsgDisp("主人公","Really?
Then, I'll do it too.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("B360107001_01_010");
MsgDisp("Kazama","Eh, t-that's fine.
...I have a bad feeling about this.");
MsgDisp("主人公","Hehe... then,
I'll see you later?");
ChEye(1,2);
ChEyeOpenLevel(1,0);
Wait(30,1);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","Doesn't this poncho look like it would
suit you, ｛風真＊＊｝?");
VoicePlay("B360107001_01_020");
MsgDisp("Kazama","No way would it suit m——");
VoicePlay("B360107001_01_030");
MsgDisp("Kazama","...Damn, ah——");
SEPlay("EV_SE_512",0,0.9);
MsgClose();
ScrFadeOut(0,0,30);
MsgDisp("主人公","Waa∋");
SEWait();
VoicePlay("B360107001_01_040");
MsgDisp("Kazama","Shh, we'll be found.
This is an emergency.
What are those guys doing...");
MsgDisp("主人公","Wait... ｛風真＊＊｝, this hurts.");
BGOpen("ne710",0);
SEPlay("EV_SE_552",0.2);
Wait(10,0);
MsgClose();
ChOpen(1,255,0,2,3,#1,#1,5,0);
ScrFadeIn(0,30);
VoicePlay("B360107001_01_050");
MsgDisp("Kazama","Ah, sorry.
Are you alright.");
MsgDisp("主人公","Did something happen?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
ChCheek(1,0);
VoicePlay("B360107001_01_060");
MsgDisp("Kazama","Those guys were there.
Both of them.");
MsgDisp("主人公","Eh?
Then, shall we 
shop together?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B360107001_01_070");
MsgDisp("Kazama","Let's not.
I want it to be just the two of us.");
MsgDisp("主人公","I-I see.
so that's how it is.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B360107001_01_080");
MsgDisp("Kazama","Not, \"so that's how it is.\", geez. Come
on, let's continue as before. We were
picking each other's clothes, weren't we?");
MsgDisp("主人公","Yeah!
I found something nice!");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B360107001_01_090");
MsgDisp("Kazama","The poncho has been rejected.");
MsgDisp("主人公","Ehhh∋");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChCheek(1,0);
