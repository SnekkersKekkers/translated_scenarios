BGOpen("fp000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I think it's time to go home......)");
MsgDisp("主人公","Ah.");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChNanaType(0);
ChOpen(4,255,0,0,0,#1,#1,0,0);
VoicePlay("E010420000_04_000");
MsgDisp("Nanatsumori","Yo.");
MsgDisp("主人公","｛七ツ森＊｝. You're out with
｛風真＊＊｝?");
VoicePlay("E010420000_04_010");
MsgDisp("Nanatsumori","Hm?");
VoicePlay("E010420000_01_000");
MsgDisp("Kazama?","Hey!");
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
Wait(8,0);
ChPosition(4,1);
MsgClose();
ChOpen(1,255,0,0,1,#1,#1,0,2);
ChMotion(1,1);
VoicePlay("E010420000_01_010");
MsgDisp("Kazama","Even though I was calling him, he wouldn't
stop.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("E010420000_04_020");
MsgDisp("Nanatsumori","Ah...... I was listening to music.
My bad.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("E010420000_01_020");
MsgDisp("Kazama","......Geez.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("E010420000_01_030");
MsgDisp("Kazama","So, why did you suddenly appear?");
MsgDisp("主人公","Me? I was out alone. Weren't you two
together?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("E010420000_04_030");
MsgDisp("Nanatsumori","Nope.
So, what do you need, Kazama?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("E010420000_01_040");
MsgDisp("Kazama","I don't need anything.
But, look!
A lost item.");
SEPlay("EV_SE_717");
ChEyeOpenLevel(1,#1);
ChMotion(4,2,1);
Wait(10,0);
SEPlay("EV_SE_665",0.5,0.3);
SEStop("EV_SE_717",1);
Wait(20,0);
MsgDisp("主人公","Candy?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("E010420000_01_050");
MsgDisp("Kazama","He ignored me when I waved at him and he
didn't notice dropping something this big.
Are you okay?");
ChEye(1,0);
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("E010420000_04_040");
MsgDisp("Nanatsumori","Ah...... sorry. You know, Kazama, I
actually like this side of you.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("E010420000_01_060");
MsgDisp("Kazama","Shut up.
Come on, hold it properly.");
SEPlay("EV_SE_717",0,0.8);
Wait(5,0);
SEPlay("EV_SE_665",0.5,0.3);
SEStop("EV_SE_717",1);
Wait(20,0);
MsgDisp("主人公","(｛七ツ森＊｝ is smiling.
He must have heard ｛風真＊＊｝ calling
him......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
