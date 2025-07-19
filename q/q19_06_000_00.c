BGOpen("sc816",2);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(It's past lights out time, I have to go
to bed early too...)");
SEPlay("EV_SE_670");
SEWait();
SEPlay("EV_SE_579");
MsgDisp("主人公","(Eh∋
Who could it be at this hour......wait,
from ｛氷室＊＊｝?)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
SEWait();
MsgDisp("主人公","He, hello...?");
VoicePlay("Q190600000_06_000");
MsgDisp("Himuro","...Why are you answering.
Isn't it past lights out time?");
MsgDisp("主人公","Aren't you, ｛氷室＊＊｝, the one who called?");
VoicePlay("Q190600000_06_010");
MsgDisp("Himuro","You could just not answer.");
MsgDisp("主人公","Come on...");
VoicePlay("Q190600000_06_020");
MsgDisp("Himuro","I mean, what's going on over there?
It's pitch black.");
MsgDisp("主人公","Eh?");
VoicePlay("Q190600000_06_030");
MsgDisp("Himuro","Look at the screen.");
MsgClose();
ScrFadeOut(0);
BGMPlay("BGM_C06_INORI_C",0.01,0.6);
StlOpen("ev_06_13");
StlEye(6,0);
StlMouth(6,0);
ScrFadeIn(0);
MsgDisp("主人公","Ah...it's ｛氷室＊＊｝!");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5,1);
VoicePlay("Q190600000_06_040");
MsgDisp("Himuro","Of course.
You're making a call.");
MsgDisp("主人公","Yeah, true...
But it's kind of fresh.");
StlEye(6,1,0);
StlMouth(6,1);
StlEyeOpenLevel(6,5,1);
VoicePlay("Q190600000_06_050");
MsgDisp("Himuro","What is?");
MsgDisp("主人公","Well, you don't have your glasses on.");
StlEye(6,1);
StlMouth(6,1);
VoicePlay("Q190600000_06_060");
MsgDisp("Himuro","Eh...
Ah——");
MsgClose();
SEPlay("EV_SE_689");
SEWait();
StlNear(1,0,30);
Wait(120);
StlEye(6,2);
StlMouth(6,2);
StlCheek(6,5);
VoicePlay("Q190600000_06_070");
MsgDisp("Himuro","...I was not concentrating.");
MsgDisp("主人公","Eh, you put them on∋");
StlEye(6,0);
StlMouth(6,2);
VoicePlay("Q190600000_06_080");
MsgDisp("Himuro","I just forgot to put them on.
More importantly, how is it there?
Are you enjoying?");
MsgDisp("主人公","Hehe, yeah!
The weather is great, and it's a very nice
place.");
StlEye(6,2,0);
StlMouth(6,2);
StlEyeOpenLevel(6,5,1);
StlCheek(6,0);
VoicePlay("Q190600000_06_090");
MsgDisp("Himuro","Ah, is that so...");
MsgDisp("主人公","I don't feel the spirit from you...");
StlEye(6,0,0);
StlMouth(6,2);
StlEyeOpenLevel(6,5,1);
VoicePlay("Q190600000_06_100");
MsgDisp("Himuro","It's so boring over here.
Without you.");
MsgDisp("主人公","Eh...");
StlEye(6,0);
StlMouth(6,2);
VoicePlay("Q190600000_06_110");
MsgDisp("Himuro","It's too silent.
Because the noisy one is away.");
MsgDisp("主人公","Hey, why say in that way...
You're so dishonest.");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("Q190600000_06_120");
MsgDisp("Himuro","Well, you'll be back after two more days.
I'll talk to you then.");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("Q190600000_06_130");
MsgDisp("Himuro","Be careful.
Don't get boisterous.");
MsgDisp("主人公","Hehe, yeah.
Thanks, ｛氷室＊＊｝.");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5,1);
VoicePlay("Q190600000_06_140");
MsgDisp("Himuro","...yeah.
Good night, then.");
SEPlay("SYS_SE_PHONE_POWER_ON");
BGMStop();
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
MsgDisp("主人公","(｛氷室＊＊｝ even gave me a call...
I'm so happy.)");
MsgClose();
ScrFadeOut(0);
