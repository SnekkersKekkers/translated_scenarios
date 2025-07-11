ChLayout(1);
ChSet(3,3);
ScrFadeIn(0);
VoicePlay("P640300004_03_000");
MsgDisp("Honda","This salad is super delicious!");
MsgDisp("主人公","Really? That's good!");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("P640300004_03_010");
MsgDisp("Honda","All of them are sweet like fruit.
Wouldn't even a vegetable-hating kid
enjoy this?");
MsgDisp("主人公","That would be nice.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("P640300004_03_020");
MsgDisp("Honda","The appearance is also pretty, 
It's a shame it'll end after 
the cultural festivalー.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("P640300004_03_030");
MsgDisp("Honda","That's right!
How about serving the vegetables
you grew in the school cafeteria?");
MsgDisp("主人公","(Yay!
I was praised by ｛本多＊＊｝.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
BGMStop();
