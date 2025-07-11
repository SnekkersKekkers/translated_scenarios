BGOpen("ar300",0);
ChLayout(1);
BGMPlay("BGM_C08_DAICHI_A",0.01);
MsgClose();
ChOpen(8,35,0,3,4,10,-1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(8);
VoicePlay("D020800000_08_000");
MsgDisp("Shirahane","｛主人公｝, can I ask ya something?");
MsgDisp("主人公","Eh, what is it?");
ChEye(8,4);
ChMotion(8,2,1);
VoicePlay("D020800000_08_010");
MsgDisp("Shirahane","Lately there's been a rumor going
around school——");
VoicePlay("D020800000_08_020");
MsgDisp("Shirahane","About some \"Young Master\" at Haba
Academy, a charismatic salesmen with
great style?");
MsgDisp("主人公","(Is he maybe talking about ｛風真＊＊｝
and his part-time job at General Store 
Simon......?)");
ChEye(8,1);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("D020800000_08_030");
MsgDisp("Shirahane","That look on your face......!
You're making me curious......");
MsgDisp("主人公","Why?");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
VoicePlay("D020800000_08_040");
MsgDisp("Shirahane","You know, I also have a reputation as
the \"Young Master of Stallion Oil\".");
MsgDisp("主人公","Hehe, really?");
ChEye(8,1);
ChMouth(8,3);
ChMotion(8,1,1);
VoicePlay("D020800000_08_050");
MsgDisp("Shirahane","Ya.
Aren't I also worthy of a rumor?");
MsgDisp("主人公","That's right. Come to think of it, the
customers seem to have fun talking to you!");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("D020800000_08_060");
MsgDisp("Shirahane","If that's the case then I'd like to
nominate myself. If you watch me I'm
sure you'll see that I'm just as good as
\"Haba High's Young Master\"～?");
MsgDisp("主人公","(Hehe! ｛風真＊＊｝ and ｛大地＊＊｝ are
completely different, but I think I can
see it......!)");
BGMStop();
MsgClose();
ScrFadeOut(0);
