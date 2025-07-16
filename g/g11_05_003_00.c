BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I still have time for my lunch break...
I wonder what I should do.)");
SEPlay("EV_SE_787");
SEWait();
MsgDisp("主人公","(Ah, a message.
From ｛柊＊＊＊｝... it says \"I'll
be waiting in the student council room.\")");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0,0);
SEWait();
SEPlay("EV_SE_DOOR_024");
SEWait();
SEPlay("EV_SE_DOOR_013");
SEWait();
BGOpen("ev005",0);
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChOpen(5,100,0,0,0,#1,#1,0,0);
SEPlay("EV_SE_712");
ScrFadeIn(0);
MsgDisp("主人公","｛柊＊＊＊｝, what's wrong?");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
SEStop("EV_SE_712",0);
VoicePlay("G110500300_05_000");
MsgDisp("Hiiragi","I can't close the distance between this
table and computer.");
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
VoicePlay("G110500300_05_010");
MsgDisp("Hiiragi","Don't tell me you already forgot.
Kitten-chan?");
MsgDisp("主人公","Huh∋
Could it be...
From our previous skinship?");
VoicePlay("G110500300_05_020");
MsgDisp("Hiiragi","Yeah. At night, you suddenly change when
our distance comes together. Our next
chance is at noon.");
ChEyeOpenLevel(5,0);
Wait(10,0);
ChMouth(5,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G110500300_05_030");
MsgDisp("Hiiragi","Are you okay with that?
We are Habataki students and members of
the student council.");
MsgDisp("主人公","Hm, I'm sorry...
Was I not supposed to do that?");
MsgClose();
ScrFadeOut(0,0,30);
ChClose(5,0,0);
BGMVol(0.5,2);
SEPlay("EV_SE_621");
SEWait();
BGOpen("sc609",0);
MsgClose();
ChOpen(5,254,2,2,2,9,#1,7,0);
ScrFadeIn(0,30);
VoicePlay("G110500300_05_040");
MsgDisp("Hiiragi","It's not that I didn't like it!
But it's really more than that...");
MsgDisp("主人公","Hm...");
MsgClose();
SEPlay("EV_SE_FOOT_039");
ChClose(5,0,30);
ChLayout(0);
MsgClose();
ChOpen(5,254,0,4,2,#1,#1,0,0,0,30);
SEWait();
VoicePlay("G110500300_05_050");
MsgDisp("Hiiragi","............");
MsgDisp("主人公","｛柊＊＊＊｝?");
ChEye(5,4);
ChMouth(5,4);
ChCheek(5,7);
VoiceEVSPlay(5);
VoicePlay("G110500300_05_060");
MsgDisp("Hiiragi","｛主人公｝......");
SEPlay("EV_SE_DOOR_024");
SEWait();
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(5,0,15);
ChLayout(1);
MsgClose();
ChOpen(5,254,5,3,2,#1,#1,5,0,0,30);
VoicePlay("G110500300_05_070");
MsgDisp("Hiiragi","Ha......");
ChEye(5,2);
ChMouth(5,2);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
SEPlay("EV_SE_DOOR_013");
SEWait();
VoicePlay("G110500300_40_000");
MsgDisp("Male Student","Please excuse me.
Oh, are both of you working together?
I appreciate the hard work.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
ChCheek(5,7);
VoicePlay("G110500300_05_080");
MsgDisp("Hiiragi","Y-Yeah.
We are working... right?");
MsgDisp("主人公","(Phew... that surprised me...
I was getting a little nervous.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
