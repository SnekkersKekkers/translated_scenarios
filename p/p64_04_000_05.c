MsgClose();
ChLayout(1);
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,0);
ChMouthOpenLevel(4,0);
ScrFadeIn(0);
ChMotion(4,2,1);
VoicePlay("P640400005_04_000");
MsgDisp("Nanatsumori","Hmmー...");
MsgDisp("主人公","How is it?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("P640400005_04_010");
MsgDisp("Nanatsumori","The cherry tomatoes...
don't have anything inside them?");
MsgDisp("主人公","Eh?");
ChMotion(4,0,1);
VoicePlay("P640400005_04_020");
MsgDisp("Nanatsumori","It's all just the skin and flesh.
The gooey insides aren't there.");
MsgDisp("主人公","That...I'm sorry?
maybe they weren't properly ripend.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("P640400005_04_030");
MsgDisp("Nanatsumori","Well, I guess it's full of lycophene.
I'll eat it all to get
beautiful skinー.");
MsgDisp("主人公","(It would have been better if I researched
how to grow them to be more delicious...
In the end it was a fail...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
BGMStop();
