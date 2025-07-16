BGOpen("sc601",0);
ScrFadeIn(0);
MsgDisp("主人公","(｛颯砂＊＊｝ is running by himself......
After the interhigh, he seems a little
distant from everyone......)");
VoicePlay("G110200600_40_000");
MsgDisp("Manager","There's no need to worry, manager.
He can only do things at his own pace.");
MsgDisp("主人公","Eh-......but......");
MsgClose();
ScrFadeOut(0);
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev002",0);
MsgClose();
BGMPlay("BGM_C02_SASSA_A");
ChOpen(2,100,0,1,1,#1,#1,0,0);
SEPlay("EV_SE_FOOT_037");
ScrFadeIn(0);
MsgDisp("主人公","｛颯砂＊＊｝.");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200600_02_000");
MsgDisp("Sassa","Oh, good work.
Can I ask you to help me cool down?");
MsgDisp("主人公","Of course. ......｛颯砂＊＊｝, you see——");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200600_02_010");
MsgDisp("Sassa","Manager, I told you I'm a crazed
track-and-field fanatic right?");
MsgDisp("主人公","Eh?");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("G110200600_02_020");
MsgDisp("Sassa","So it's good to run with you like this
sometimes.");
MsgDisp("主人公","But......
I think everyone and the club leader seems
to misunderstand ｛颯砂＊＊｝.");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("G110200600_02_030");
MsgDisp("Sassa","......What about you?");
MsgDisp("主人公","I think I understand?");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200600_02_040");
MsgDisp("Sassa","Yeah, that's all I need.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200600_02_050");
MsgDisp("Sassa","I'm feeling energized, I'll run another
lap with more energy!
You go on ahead.");
SEStop("EV_SE_FOOT_037",2);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
MsgDisp("主人公","(｛颯砂＊＊｝......)");
MsgClose();
ChClose(2,0,0);
