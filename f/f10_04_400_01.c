BGOpen("sc520",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","...Ah!
｛七ツ森＊｝, ｛本多＊＊｝!");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChNanaType(0);
ChOpen(4,254,0,0,0,-1,-1,0,1);
ChOpen(3,254,0,0,0,-1,-1,0,2);
VoiceEVSPlay(3);
VoicePlay("F100440001_03_000");
MsgDisp("Honda","｛主人公｝.");
ChMotion(4,2,1);
VoicePlay("F100440001_04_000");
MsgDisp("Nanatsumori","...Is that enough for you Dahon?
It's about time for me to go to work.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("F100440001_03_010");
MsgDisp("Honda","Ah, sorry.
I'll ask you again later.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChMotion(4,0,1);
ChClose(4,0,30);
ChPosition(3,0);
MsgDisp("主人公","Hey, ｛本多＊＊｝.
Can I ask you something?");
ChSet(3,3);
VoicePlay("F100440001_03_020");
MsgDisp("Honda","Yeah yeah.
I'll tell you anything I know!");
MsgDisp("主人公","Umm...
How did you know about ｛七ツ森＊｝ 's
job as a model?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("F100440001_03_030");
MsgDisp("Honda","Because Mii-kun
was in a magazine.");
MsgDisp("主人公","But he's completely different to 
the usual ｛七ツ森＊｝? 
His hair is different, he's got makeup
on, and he's not even wearing glasses. ");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("F100440001_03_040");
MsgDisp("Honda","No. Whether you're skinny or 
fat, your bone structure is 
the same. Makeup and hairstyle 
can't change anything.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("F100440001_03_050");
MsgDisp("Honda","That's why, both Nana and 
Mii-kun are the same to me.");
MsgDisp("主人公","I-I see.");
ChPosition(3,2);
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChNanaType(0);
ChOpen(4,254,0,1,1,-1,-1,0,1,0,60);
ChMotion(4,2,1);
VoicePlay("F100440001_04_010");
MsgDisp("Nanatsumori","Dahon.
I told you it's not OK to mention
either of those names, right?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("F100440001_03_060");
MsgDisp("Honda","Huh?
But, you also know too, right?");
MsgDisp("主人公","Y-yeah.");
ChEye(4,1);
ChMouth(4,0);
VoicePlay("F100440001_04_020");
MsgDisp("Nanatsumori","That's not the problem.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("F100440001_04_030");
MsgDisp("Nanatsumori","Walls have ears and shoji
screens have eyes.
Don't forget that, you two.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4,0,30);
ChPosition(3,0);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,2,1);
VoicePlay("F100440001_03_070");
MsgDisp("Honda","Hmm.
Shouldn't everyone know by now?
Right?");
MsgDisp("主人公","(To think that 
｛本多＊＊｝ could tell only by 
his bone structure...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
