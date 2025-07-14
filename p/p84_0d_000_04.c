ScrFadeIn(0);
BGMStop();
VoicePlay("P840D00004_49_000");
MsgDisp("Mom","Thank you for taking the trouble to look
after her.");
VoicePlay("P840D00004_45_000");
MsgDisp("Girl","Big sis, thank you!");
MsgDisp("主人公","I'm glad.
Please be careful to not let go of her
hand in crowded places.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,0,0,0,#1,#1,0,1);
ChOpen(22,254,0,0,3,#1,#1,0,2);
ChMotion(22,3,1);
VoicePlay("P840D00004_22_000");
MsgDisp("Hikaru","Mari is brilliant～!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P840D00004_21_000");
MsgDisp("Michiru","The school announcements were spot on.
Because of that, the Mother knew right
away.");
MsgDisp("主人公","Hehe, thank you!");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("P840D00004_21_010");
MsgDisp("Michiru","When you entrust Mari, the cultural
festival is bound to be safe. I wonder
this is the result of giving it your best
at student council these last three years?");
MsgDisp("主人公","(Yeah, seems like I handled my
responsiblities with no issues. I'm glad I
continued with the student council!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
