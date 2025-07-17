BGOpen("ar300",0);
ChLayout(1);
BGMPlay("BGM_C08_DAICHI_A",0.01);
MsgClose();
ChOpen(8,35,0,3,4,10,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(8);
VoicePlay("D020800600_08_000");
MsgDisp("Shirahane","｛主人公｝.");
MsgDisp("主人公","Hmm?
What is it, ｛大地＊＊｝?");
VoicePlay("D020800600_08_030");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
MsgDisp("Shirahane","I want to go somewhere with you.
Is it time for a date?");
VoicePlay("D020800600_08_020");
ChEye(8,2);
ChMouth(8,3);
MsgDisp("Shirahane","...Huh?");
MsgDisp("主人公","Eh?");
VoicePlay("D020800600_08_040");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,4,1);
ChCheek(8,7);
MsgDisp("Shirahane","Shocked ya, huh...
Bloody hell, I said something weird.");
MsgDisp("主人公","Uhm, it's not that...
It's just a little surprising.");
VoicePlay("D020800600_08_050");
ChMotion(8,2,1);
MsgDisp("Shirahane","I guess saying it suddenly like that would
shock anyone.");
VoicePlay("D020800600_08_060");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
MsgDisp("Shirahane","Is it okay to invite ya out?
I'll try not to interfere with your
studies.");
MsgDisp("主人公","Okay.
That's fine.");
VoicePlay("D020800600_08_070");
ChMotion(8,3,1);
MsgDisp("Shirahane","Thank God～!
I'll call ya when it's time.");
MsgDisp("主人公","(｛大地＊＊｝ is so bold.
I guess I should wait for his date
invitation?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
