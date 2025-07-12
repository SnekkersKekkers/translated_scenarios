ScrFadeIn(0);
BGMStop();
MsgDisp("主人公","Alright.
I can make a list of all items in storage!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,0,0,0,#1,#1,0,1);
ChOpen(22,254,0,0,3,#1,#1,0,2);
VoicePlay("P840D00002_21_000");
MsgDisp("Michiru","That's a lovely list.
Even though this is my first time
seeing one, I know it's wonderful.");
VoicePlay("P840D00002_46_000");
MsgDisp("School Girl","Excuse me,
our blackout curtain ripped.
Do you have any spares?");
MsgDisp("主人公","There's some near the
entrance of the gym's storage room.
Please write your name and the number
you need here before taking them.");
VoicePlay("P840D00002_39_010");
MsgDisp("Male Student","Excuse me, I want 
some cardboard, do you have any?");
MsgDisp("主人公","How many do you need?
Please give me a moment to prepare them.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P840D00002_22_000");
MsgDisp("Hikaru","Oohlala...
Mari is a super capable woman!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P840D00002_21_010");
MsgDisp("Michiru","Yeah, she's cool.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P840D00002_22_010");
MsgDisp("Hikaru","The presence expected of an experienced
person. Hikaru has a better opinion of
Mari!");
MsgDisp("主人公","(Yeah, managing the materials was a huge
success!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
