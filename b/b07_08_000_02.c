MsgDisp("主人公","What food do you like to eat?");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("B070800000_08_060");
MsgDisp("Shirahane","Sunny side-up!
I love the taste and its appearance!");
ChEye(8,0);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("B070800000_08_070");
MsgDisp("Shirahane","I don't know if ya prefer soy sauce or
ketchup, but I think they're both super
delicious.");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("B070800000_08_080");
MsgDisp("Shirahane","That's why, I'm okay with any seasonin'▼");
MsgDisp("主人公","Then, how do you like them cooked?");
ChEye(8,4);
ChMouth(8,3);
ChMotion(8,2,1);
VoicePlay("B070800000_08_090");
MsgDisp("Shirahane","That's tough...
Fully-cooked is delicious ta eat, but I
like the runny yolk when it's half-done!");
ChEye(8,4);
ChMouth(8,4);
ChMotion(8,0,1);
VoicePlay("B070800000_08_100");
MsgDisp("Shirahane","Damn...
I really wanna eat fried eggs now.
I'm startin' ta get hungry too...");
MsgDisp("主人公","(Hehe!
He really likes sunny side up eggs!)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(8,#1);
ChMouthOpenLevel(8,#1);
ChCheek(8,0);
