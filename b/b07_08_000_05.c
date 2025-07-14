MsgDisp("主人公","Hey, ｛大地＊＊｝, what are your hobbies?");
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,4,1);
VoicePlay("B070800000_08_230");
MsgDisp("Shirahane","Hobbies huhー...
Hmm, what is it?
I've never really thought about it.");
MsgDisp("主人公","Eh, really?");
ChMotion(8,0,1);
VoicePlay("B070800000_08_240");
MsgDisp("Shirahane","If I had to say, I like challenging myself
with different things.");
ChEye(8,0);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("B070800000_08_250");
MsgDisp("Shirahane","...Ah!
I like reading Habacha!");
ChEye(8,3);
ChMouth(8,3);
VoicePlay("B070800000_08_260");
MsgDisp("Shirahane","It's something that's always in my house,
so reading it has become second nature.");
ChMotion(8,0,1);
VoicePlay("B070800000_08_270");
MsgDisp("Shirahane","The articles and photos are always
interesting, right? I like it so much that
I read it over and over.");
MsgDisp("主人公","(So ｛大地＊＊｝'s hobbies are
challenging himself and reading Habcha...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(8,#1);
ChMouthOpenLevel(8,#1);
ChCheek(8,0);
