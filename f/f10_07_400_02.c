ChLayout(1);
BGOpen("sc310",0);
SEPlay("EV_SE_788",0.1,0.6);
MsgDisp("主人公","(Next is biology.)");
MsgClose();
ScrFadeOut(0);
SEStop("EV_SE_788");
SEPlay("EV_SE_DOOR_025");
Wait(220,0);
MsgClose();
BGOpen("sc320",0);
ChOpen(32,254,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("F100740002_44_000");
MsgDisp("School Girl A","Ehhh, why is ");
VoicePlay("F100740002_42_010");
MsgDisp("Male Student A","We have biology next right?
Where's Mikagecchi?");
ChEye(32,0);
ChMouth(32,0);
ChEyeOpenLevel(32,0);
VoicePlay("F100740002_32_000");
MsgDisp("Vice Principal Himuro","...Quiet.
I have something to tell Mikage-sensei,
so I'll have to wait here.");
VoicePlay("F100740002_41_020");
MsgDisp("Male Student B","Did Mikagecchi do something wrong?");
VoicePlay("F100740002_45_000");
MsgDisp("School Girl B","Is he gonna get scolded
by Himuro-sensei?
Poor guy.");
MsgDisp("主人公","(Ehh?
｛御影＊＊｝ was praised the other day, 
so it'll be alright, right...?)");
SEPlay("EV_SE_DOOR_019");
Wait(50,0);
VoicePlay("F100740002_07_000");
MsgDisp("Mikage","Oh, you're all awfully
quiet tod——");
VoicePlay("F100740002_07_010");
MsgDisp("Mikage","Gah, Vice-Principal Himuro∋");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("F100740002_32_010");
MsgDisp("Vice Principal Himuro","Mikage-sensei. A word.");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
BGMPlay("BGM_C07_MIKAGE_A",0.01);
ChPosition(32,1);
MsgClose();
ChOpen(7,254,0,2,0,-1,-1,0,2);
VoicePlay("F100740002_07_020");
MsgDisp("Mikage","Ahhh, is that so?
Then, let's go outs——");
VoicePlay("F100740002_32_020");
MsgDisp("Vice Principal Himuro","Here is fine.");
ChEye(7,2);
ChMouth(7,4);
ChMotion(7,4);
VoicePlay("F100740002_07_030");
MsgDisp("Mikage","Ugh....");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("F100740002_32_030");
MsgDisp("Vice Principal Himuro","In a survey we conducted
recently among guardians, we received
many voices of gratitude for
Mikage-sensei.");
ChEye(7,5);
ChMouth(7,4);
ChMotion(7,0);
ChMouthOpenLevel(7,5);
VoicePlay("F100740002_07_040");
MsgDisp("Mikage","EH?");
ChEye(32,2);
ChMouth(32,2);
VoicePlay("F100740002_32_040");
MsgDisp("Vice Principal Himuro","On behalf of the academy, 
I would like to extend my gratitude to
Mikage-sensei. Thank you.");
SEPlay("EV_SE_GAYA_025");
Wait(60,0);
VoicePlay("F100740002_42_040");
MsgDisp("Male Student A","Mikagecchi, that's amazing!");
VoicePlay("F100740002_44_010");
MsgDisp("School Girl A","Yeah, that's great!");
ChEye(32,2);
ChMouth(32,2);
VoicePlay("F100740002_32_050");
MsgDisp("Vice Principal Himuro","Your homeroom teacher is acknowledged
not only by students, but also by 
parents. You can take pride in that.");
MsgDisp("主人公","｛御影＊＊｝, that's amazing right?!");
VoicePlay("F100740002_41_060");
MsgDisp("Male Student B","Mikagecchi, you're awesome!");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("F100740002_32_060");
MsgDisp("Vice Principal Himuro","...That is all.
Then, move onto your lesson.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(32);
SEWait();
ChEye(7,5);
ChMouth(7,4);
ChMotion(7,0);
ChPosition(7,0);
VoicePlay("F100740002_07_050");
MsgDisp("Mikage","Ah, yes.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ChMouthOpenLevel(7,-1);
VoicePlay("F100740002_07_060");
MsgDisp("Mikage","Thank you. It's all thanks to you guys.
I'm looking forward to 
the next evaluation!");
VoicePlay("F100740002_42_070");
MsgDisp("Male Student A","Mikagechi, treat us
when you get a raise!");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("F100740002_07_070");
MsgDisp("Mikage","Sure.
I'll treat each of you to lunch once.");
MsgDisp("主人公","(Himuro-sensei went out of his way 
to do that in front of everyone...
｛御影＊＊｝, I'm so happy for you!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
