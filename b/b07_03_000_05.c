MsgDisp("主人公","Hey, ｛本多＊＊｝, tell me about
your hobbies.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,2);
VoicePlay("B070300000_03_250");
MsgDisp("Honda","My hobbies, huh?
That's the most troubling thing to be
asked.");
MsgDisp("主人公","Does it really bother you?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0);
VoicePlay("B070300000_03_260");
MsgDisp("Honda","Yeah, I guess it depends on how you define
the word hobby. Do you mean it in the
sense of something you like and do
habitually......");
MsgDisp("主人公","Don't overthink it.");
ChMotion(3,4);
VoicePlay("B070300000_03_270");
MsgDisp("Honda","Okay, if it's something I do often in my
free time, I guess I take care of
creatures.");
MsgDisp("主人公","As in pets?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("B070300000_03_280");
MsgDisp("Honda","Yeah. I have a lot of various plants,
fish, and insects. There are a ton of
them.");
MsgDisp("主人公","Hehe, that sounds challenging.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("B070300000_03_290");
MsgDisp("Honda","Maintaining a small ecosystem of plants,
fish, and insects in an aquarium doesn't
take much effort.");
MsgDisp("主人公","Really?
That's incredible!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4);
ChEyeOpenLevel(3,0);
VoicePlay("B070300000_03_300");
MsgDisp("Honda","When aquatic plants form oxygen bubbles,
doesn't it make you think of Earth's
ancient oceans? In addition to that, I
like to use my telescope.");
MsgDisp("主人公","(｛本多＊＊｝'s hobbies are not so easy to
learn......)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
