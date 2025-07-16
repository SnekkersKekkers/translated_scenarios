BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(There are a lot of magazines with
impressive gifts these days.
Hmm, it's hard to display them......)");
VoicePlay("G110300602_03_000");
MsgDisp("Honda?","Is it a magazine with a luxurious gift?
Does the item come with a booklet?");
MsgClose();
BGMPlay("BGM_C03_HONDA_A");
ChOpen(3,35,0,0,4,#1,#1,0,0);
MsgDisp("主人公","Ah ｛本多＊＊｝, good work.
Hehe, it really is like that.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("G110300602_03_010");
MsgDisp("Honda","Right?
Ah, but I actually like this sort of
magazine.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("G110300602_03_020");
MsgDisp("Honda","A while ago, there was a magazine that
came with a microscope as an attachment.
If you collected every issue, at the end
you got a microscope.");
MsgDisp("主人公","Hehe, that's interesting .");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ChEyeOpenLevel(3,0);
VoicePlay("G110300602_03_030");
MsgDisp("Honda","Right?
I wonder who thought of that?
That's a great idea.");
MsgDisp("主人公","I think ｛本多＊＊｝ would come
up with something even more interesting.");
ChEye(3,1);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("G110300602_03_040");
MsgDisp("Honda","Ah, I'll accept the challenge.
I'll think about it!");
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev003",0);
ChOpen(3,100,0,0,2,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","...... Ah, ｛本多＊＊｝.
Isn't it time to head back up already?");
ChMotion(3,1);
VoicePlay("G110300602_03_050");
MsgDisp("Honda","Yeees, a bit more and I think I've
stumbled upon a good idea.");
ChEye(3,2);
ChMouth(3,2);
ChMotion(3,2);
VoicePlay("G110300602_03_060");
MsgDisp("Honda","You see, it takes a long time for books to
be distributed and circulated, so they may
hatch during the return period......");
MsgDisp("主人公","Uh, hatch?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("G110300602_03_070");
MsgDisp("Honda","Right right, I can't resolve this problem
well......");
MsgDisp("主人公","(｛本多＊＊｝, you're thinking of something
outrageous aren't you......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
