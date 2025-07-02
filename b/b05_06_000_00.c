BGOpen("fp210",0);
MsgClose();
ChOpen(6,255,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B050600000_06_000");
MsgDisp("Himuro","There really are a lot of cherry
blossoms.");
MsgDisp("主人公","Yeah.
They're soft to step on.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B050600000_06_010");
MsgDisp("Himuro","......like a cherry blossom carpet?");
MsgDisp("主人公","I guess it's more like a futon
than a carpet?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B050600000_06_020");
MsgDisp("Himuro","A cherry blossom futon, huh?
I see.");
MsgDisp("主人公","Hmm?");
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
StlOpen("ev_06_02");
StlEye(6,1);
StlMouth(6,1);
EfctOpen(15);
SEPlay("EV_SE_645");
Wait(20,0);
BGMPlay("BGM_C06_INORI_B",0.01);
ScrFadeIn(0);
MsgDisp("主人公","Eh, hold on......!
｛氷室＊＊｝ ∋");
StlEye(6,1);
StlMouth(6,1);
VoicePlay("B050600000_06_030");
MsgDisp("Himuro","What?
You called it a futon, didn't you?");
MsgDisp("主人公","That's true, but......");
StlEye(6,1);
StlMouth(6,0);
StlEyeOpenLevel(6,0);
VoicePlay("B050600000_06_040");
MsgDisp("Himuro","Why don't you try it?
Surprisingly, it's not so bad.");
StlEye(6,1);
StlMouth(6,0);
VoicePlay("B050600000_06_050");
MsgDisp("Himuro","A comfortable bed and a stunning view.
Cherry Blossoms as far as the eye can 
see. So beautiful,......it's scary.");
StlEye(6,1);
StlMouth(6,1);
StlEyeOpenLevel(6,0);
VoicePlay("B050600000_06_060");
MsgDisp("Himuro","Everything I was thinking about,
everything that worried me, is
drifting away.");
MsgDisp("主人公","Is something bothering you?");
StlEye(6,1);
StlMouth(6,1);
VoicePlay("B050600000_06_070");
MsgDisp("Himuro","Why wouldn't I?
Everyone worries about a thing or two,
don't they?");
StlEye(6,1);
StlMouth(6,0);
StlEyeOpenLevel(6,5);
VoicePlay("B050600000_06_080");
MsgDisp("Himuro","Ah, I guess you don't have any
worries so you don't need to lay down.");
MsgDisp("主人公","Geez!");
MsgClose();
ScrFadeOut(0);
EfctClose();
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex980",0);
BGOpen("fp210",0);
Wait(60);
BGMVol(0.5,2);
ScrFadeIn(0);
VoicePlay("B050600000_06_090");
MsgDisp("Himuro","......Done.");
SEPlay("EV_SE_645",0.5,0.6);
Wait(20,0);
MsgClose();
ChOpen(6,255,0,0,4,-1,-1,0,0);
MsgDisp("主人公","Haa......I was just shocked when
you suddenly laid down.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
VoicePlay("B050600000_06_100");
MsgDisp("Himuro","It was nothing.
I just wanted to cut loose.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B050600000_06_110");
MsgDisp("Himuro","Today might be the first and last time
we get to see the cherry blossoms
together.");
MsgDisp("主人公","Eh?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("B050600000_06_120");
MsgDisp("Himuro","It's nothing.
Come on, let's go.");
MsgDisp("主人公","（｛氷室＊＊｝……?）");
BGMStop();
ChPrmTblAdd(6,0);
