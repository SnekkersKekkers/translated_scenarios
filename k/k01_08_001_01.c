ChEye(8,3);
ChMouth(8,0);
ChMotion(8,0);
ChCheek(8,5);
SEPlay("EV_SE_668");
SEWait();
VoicePlay("K010800101_08_000");
MsgDisp("Shirahane","Amazing...
You a psychic?");
MsgDisp("主人公","Hm?");
ChEye(8,3);
ChMouth(8,3);
VoicePlay("K010800101_08_010");
MsgDisp("Shirahane","I super like this kind of thing.
I'm so happy～!");
MsgDisp("主人公","Really?
Thank goodness!");
ChMotion(8,3,1);
VoicePlay("K010800101_08_020");
VoiceEVSPlay(8);
MsgDisp("Shirahane","Both of us are happy▼
Thanks so much, ｛主人公｝.");
MsgDisp("主人公","(He looks super happy!
Thank goodness!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(8,0,0);
