BGOpen("sc822",0);
BGMPlay("BGM_PLACE_TRAVEL");
MsgClose();
ChOpen(3,254,0,0,4,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("Q070301000_46_000");
MsgDisp("Woman A","Wait, Huh?
Isn't that person from the quiz show?");
VoicePlay("Q070301000_47_000");
MsgDisp("Woman B","Eh! Omg.
Excuse me, may I take a picture?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("Q070301000_03_000");
MsgDisp("Honda","With me?　Sure......");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(3);
SEPlay("EV_SE_045");
MsgDisp("","(Flash)");
VoicePlay("Q070301000_46_010");
MsgDisp("Woman A","One more, please.");
SEPlay("EV_SE_045");
MsgDisp("","(Flash)");
MsgDisp("主人公","(That's the quiz king.
Lots of people are watching ｛本多＊＊｝ 
on TV, huh......)");
VoicePlay("Q070301000_46_020");
MsgDisp("Woman A","You did it!");
VoicePlay("Q070301000_47_010");
MsgDisp("Woman B","Yeah!");
SEPlay("EV_SE_FOOT_RUN_AWAY_TWO");
SEWait();
BGMStop();
MsgClose();
ScrFadeOut(0);
Wait(30,1);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C03_HONDA_I",0.01);
StlOpen("ev_03_14");
StlEye(3,1);
StlMouth(3,0);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("Q070301000_03_010");
MsgDisp("Honda","｛主人公｝, sorry for keeping you
waiting.");
MsgDisp("主人公","No, I'm fine.
But it really is impressive that so many 
know about you, ｛本多＊＊｝ ");
StlEye(3,0);
StlMouth(3,0);
VoicePlay("Q070301000_03_020");
MsgDisp("Honda","Yeah......
I don't mind being asked questions by 
the kids in Habataki, but......");
StlEye(3,0,0);
StlMouth(3,0);
StlEyeOpenLevel(3,5,1);
VoicePlay("Q070301000_03_030");
MsgDisp("Honda","Earlier, I felt a little sad.");
StlEye(3,0,0);
StlEyeOpenLevel(3,0,1);
VoicePlay("Q070301000_03_040");
MsgDisp("Honda","I've never felt like that before. I was
interrupted in my time with you...... I
didn't like it at all.");
MsgDisp("主人公","｛本多＊＊｝ ……?");
StlEye(3,0);
StlMouth(3,0);
VoicePlay("Q070301000_48_000");
MsgDisp("Woman C","They said he was around here, right?");
StlEye(3,1);
StlMouth(3,0);
VoicePlay("Q070301000_44_000");
MsgDisp("Woman D","Yeah.
I wonder where the quiz king is......");
StlEye(3,1);
StlMouth(3,1);
MsgDisp("主人公"," ｛本多＊＊｝ ?");
StlEye(3,3);
StlMouth(3,2);
VoicePlay("Q070301000_03_050");
MsgDisp("Honda","Shush.
If you don't turn around like this, they 
won't know, okay?");
MsgDisp("主人公","Eh?");
StlEye(3,2);
StlMouth(3,1);
VoicePlay("Q070301000_03_060");
MsgDisp("Honda","I mean, interruption is bad.
I'm free with you now.");
MsgClose();
ScrFadeOut(0);
StlClose();
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMVol(0.5,2);
ChOpen(3,254,4,4,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("Q070301000_03_070");
MsgDisp("Honda","I guess I feel a bit guilty?
But it can't be helped.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("Q070301000_03_080");
MsgDisp("Honda","For me, the most important is spending
the free period with you.
Come on, let's go!");
MsgDisp("主人公","Yeah!
Thanks, ｛本多＊＊｝.");
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
Wait(30,1);
ChPrmTblAdd(3,0);
