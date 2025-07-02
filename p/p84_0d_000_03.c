ScrFadeIn(0);
BGMStop();
MsgDisp("主人公","...Huh?
Where did the erasers dissapear off to?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,4,0,4,-1,-1,0,1);
ChOpen(22,254,0,0,0,-1,-1,0,2);
VoicePlay("P840D00003_21_000");
MsgDisp("Michiru","Even though it was supposed to have
been on the desk just a moment ago...");
MsgDisp("主人公","The rulers too... where are they?");
VoicePlay("P840D00003_46_000");
MsgDisp("School Girl","Excuse meー,
but our class doesn't
have enough blackout curtains.");
MsgDisp("主人公","Eh, blackout curtains?
Umm, where do we... store them again?");
VoicePlay("P840D00003_39_010");
MsgDisp("Male Student","Excuse meー!
The cardboard I requested
hasn't been delivered.");
MsgDisp("主人公","Requested cardboard...?
Did you request one∋");
ChEye(22,2);
ChMouth(22,2);
ChMotion(22,2,1);
VoicePlay("P840D00003_22_000");
MsgDisp("Hikaru","You haven't managed at all....");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("P840D00003_21_010");
MsgDisp("Michiru","Mari, you have a supplies list right?
I'll lend you some help.");
MsgDisp("主人公","(Uuugh... I wasn't able to manage at
all... A huge fail...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
