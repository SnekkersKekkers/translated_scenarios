BGOpen("sc520",0);
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(2);
VoicePlay("L060200001_02_000");
MsgDisp("Sassa?","｛主人公｝.");
MsgClose();
BGMPlay("BGM_C02_SASSA_A");
ChOpen(2,254,0,0,4,-1,-1,0,0);
MsgDisp("主人公","Ah, ｛颯砂＊＊｝.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("L060200001_02_010");
MsgDisp("Sassa","I was looking for you.");
MsgDisp("主人公","Oh, what's up?");
ChEye(2,3);
ChMouth(2,4);
ChMotion(2,0);
ChEyeOpenLevel(2,0);
VoicePlay("L060200001_02_020");
MsgDisp("Sassa","This is thanks for the chocolate.");
SEPlay("EV_SE_664");
SEWait();
MsgDisp("主人公","Wah, thanks!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("L060200001_02_030");
MsgDisp("Sassa","I'm not sure what's popular with girls,
so I just chose something I thought
would be good.");
MsgDisp("主人公","Yeah, that's what makes me happiest.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("L060200001_02_040");
MsgDisp("Sassa","I see, that's a relief.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,2);
ChCheek(2,10);
VoicePlay("L060200001_02_050");
MsgDisp("Sassa","Ah, but open it later.
I'm not sure what expression to have
while you open it, so.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(2);
MsgDisp("主人公","(I'm happy I got a White Day
present from ｛颯砂＊＊｝!)");
