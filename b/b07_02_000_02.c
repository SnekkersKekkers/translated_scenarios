MsgDisp("主人公","What's ｛颯砂＊＊｝'s favorite food?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B070200000_02_060");
MsgDisp("Sassa","Udon for sure.
It's definitely udon.
Do you like it?");
MsgDisp("主人公","Yep, it's yummy.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,1);
VoicePlay("B070200000_02_070");
MsgDisp("Sassa","I definitely prefer udon over soba.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("B070200000_02_080");
MsgDisp("Sassa","Ryota doesn't agree with me on this.
He's a soba sort of guy.");
MsgDisp("主人公","Hehe, is that so.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B070200000_02_090");
MsgDisp("Sassa","So, you're an udon fan too right?
I'm looking forward to telling Ryota next
time.");
MsgDisp("主人公","Uhm, maybe I like both?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
ChEyeOpenLevel(2,7);
VoicePlay("B070200000_02_100");
MsgDisp("Sassa","Avoiding it, huh?");
MsgDisp("主人公","(So ｛颯砂＊＊｝ likes udon...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
