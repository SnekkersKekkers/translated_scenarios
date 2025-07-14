BGOpen("sc710",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
VoicePlay("F110410000_04_000");
MsgDisp("Nanatsumori","Ah...");
MsgDisp("主人公","Oh, ｛七ツ森＊｝. What are you doing?");
VoicePlay("F110410000_04_010");
MsgDisp("Nanatsumori","Walking.");
MsgDisp("主人公","I see that.");
ChMotion(4,1,1);
VoicePlay("F110410000_04_020");
MsgDisp("Nanatsumori","I'm patrolling.");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("F110410000_04_030");
MsgDisp("Nanatsumori","I'm patrolling like this for discipline
control.");
MsgDisp("主人公","I see. ｛七ツ森＊｝ is wearing his
uniform properly, and he's tall, so he can
control the situation.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("F110410000_04_040");
MsgDisp("Nanatsumori","That's right. Well, the vice president
said I only needed to patrol like this
three times a day, so I'll go now.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4,0,30);
MsgDisp("主人公","(｛七ツ森＊｝ really has the air of a
model student when he's at school.
Good luck!)");
MsgClose();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
