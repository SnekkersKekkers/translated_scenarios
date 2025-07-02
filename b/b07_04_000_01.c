MsgDisp("主人公","What sort of TV do you watch?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2,1);
VoicePlay("B070400000_04_010");
MsgDisp("Nanatsumori","TV huh... not a lot.
Mostly watch stuff on the internet.");
MsgDisp("主人公","I see.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B070400000_04_020");
MsgDisp("Nanatsumori","I'm registered on a few video sites, 
so I won't get in trouble.");
MsgDisp("主人公","What do you wacth on there?");
ChEye(4,0);
ChMouth(4,4);
VoicePlay("B070400000_04_030");
MsgDisp("Nanatsumori","Original shows.
Song programs and shopping programs.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("B070400000_04_040");
MsgDisp("Nanatsumori","Ah and catch up TV.
Since it's convenient.");
MsgDisp("主人公","(I feel like he's a TV fan...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(4,-1);
ChMouthOpenLevel(4,-1);
ChCheek(4,0);
