BGOpen("ar200",0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛氷室＊＊｝.
Good work today.
Are you going home already?");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(6,35,0,0,0,#1,#1,0,0);
VoicePlay("G110600900_06_000");
MsgDisp("Himuro","Yeah, but I'm dropping by the beach.");
MsgDisp("主人公","Then, is it okay if I come to watch you?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600900_06_010");
MsgDisp("Himuro","Eh......it's fine but......");
MsgDisp("主人公","Yay!");
MsgClose();
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgClose();
BGOpen("ev006",1);
BGMPlay("BGM_C06_INORI_B");
ChOpen(6,100,2,2,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110600900_06_020");
MsgDisp("Himuro","Why don't you just quit work your next
shift?");
MsgDisp("主人公","Eh.
Why?");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("G110600900_06_030");
MsgDisp("Himuro","I guess you haven't realized it.
You're tired, and it's showing on your
face.");
MsgDisp("主人公","Uh......");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600900_06_040");
MsgDisp("Himuro","Taking care of your health is also part of
the job. I wouldn't want to work alongside
someone who looks like that. It would be a
real nuisance if they collapsed.");
MsgDisp("主人公","I see......
Sorry.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600900_06_050");
MsgDisp("Himuro","No need.
It's not like you collapsed just now, so
there's no need to apologize.");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("G110600900_06_060");
MsgDisp("Himuro","Studying, exercise, leisure......
I get you have a lot of priorities.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600900_06_070");
MsgDisp("Himuro","But rest is equally as...
No, it's even more important.
Even you should understand that.");
MsgDisp("主人公","Yes.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600900_06_080");
MsgDisp("Himuro","Well, we can't stay here.
Let's head home.");
MsgDisp("主人公","Eh, but......");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600900_06_090");
MsgDisp("Himuro","We'll come back soon.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600900_06_100");
MsgDisp("Himuro","Your health comes first, just remember
that.");
MsgDisp("主人公","Ah...... yes.
Thank you, ｛氷室＊＊｝.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
