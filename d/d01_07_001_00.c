BGOpen("sc310",0);
MsgClose();
ScrFadeIn(0);
MsgDisp("主人公","(Huh......My favorite pen is missing!
Maybe I left it during my last class in
the science lab?)");
SEPlay("EV_SE_FOOT_RUN_KEEP_ALONE",0,0.6);
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc352",0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, here it is!");
VoicePlay("D010700100_07_000");
MsgDisp("Mikage?","Woah, you did it!");
MsgDisp("主人公","(Hm? That voice coming from the prep
room......)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
SEPlay("EV_SE_DOOR_013");
BGOpen("sc351",0);
ScrFadeIn(0);
SEWait();
MsgDisp("主人公","Excuse me......");
VoicePlay("D010700100_07_010");
MsgDisp("Mikage?","You did it, Molly!∈");
MsgClose();
SEPlay("EV_SE_544",0,0.4);
ChOpen(7,37,0,0,3,-1,-1,0,0);
MsgDisp("主人公","｛御影＊＊｝.
Did something happen?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("D010700100_07_020");
MsgDisp("Mikage","Oh, it's you, huh?
Her daughter was born safely!
Molly had a baby∈");
MsgClose();
ScrFadeOut(0);
ChClose(7,0,0);
BGMPlay("BGM_C07_MIKAGE_C",0.01);
StlOpen("ev_07_06");
StlEye(7,0);
StlMouth(7,0);
Wait(10,0);
ScrFadeIn(0);
VoicePlay("D010700100_07_030");
MsgDisp("Mikage","Here, take a look.
Isn't she cute?");
StlEye(7,1);
MsgDisp("主人公","She really is......!
｛御影＊＊｝, congratulations!");
StlEyeOpenLevel(7,5);
VoicePlay("D010700100_07_040");
MsgDisp("Mikage","Ahh, thank you!
She did such a great job～");
StlEye(7,0);
VoicePlay("D010700100_07_050");
MsgDisp("Mikage","Look at her eyes.
They look just like Molly's.
Pitch black and huge......Right?");
MsgDisp("主人公","Yeah!");
StlEyeOpenLevel(7,5);
VoicePlay("D010700100_07_060");
MsgDisp("Mikage","......She kind of reminds me of you.
Kind of teary-eyed.");
MsgDisp("主人公","Eh?");
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
BGOpen("sc351",0);
MsgClose();
ChOpen(7,37,0,0,4,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("D010700100_07_070");
MsgDisp("Mikage","Huh......Come to think of it, why did you
come running over here?");
MsgDisp("主人公","I came to get something I forgot
and then I heard your voice so......");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("D010700100_07_080");
MsgDisp("Mikage","Oh.
I was just surprised, my bad.");
MsgDisp("主人公","It's fine.
I'm grateful I was able to celebrate
this with you, ｛御影＊＊｝.");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("D010700100_07_090");
MsgDisp("Mikage","Thank you, you're going to make me cry.
Molly was actually the first kid I
adopted.");
MsgDisp("主人公","Oh, really?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,4);
ChEyeOpenLevel(7,0);
VoicePlay("D010700100_07_100");
MsgDisp("Mikage","Yep, and while the heir of ranch was
off having fun with you guys, Molly
unexpectedly became a mother.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChEyeOpenLevel(7,10);
VoicePlay("D010700100_07_110");
MsgDisp("Mikage","I have things I need to do too, just
like Molly.");
MsgDisp("主人公","｛御影＊＊｝……?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("D010700100_07_120");
MsgDisp("Mikage","Right.
I'll put some pictures up of Molly and
her baby. Come check them out anytime!");
MsgDisp("主人公","Ah, okay.");
MsgDisp("主人公","(｛御影＊＊｝ has things to do, huh......?
Does he mean something besides teaching?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
ChPrmTblAdd(7,0);
