ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ChCheek(1,0);
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,0,1);
ChCheek(4,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("D140B06101_04_000");
MsgDisp("Nanatsumori","It's no good.
Dahon won't even pick up the phone.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("D140B06101_01_000");
MsgDisp("Kazama","It can't be helped.
Then, let's just eat already.");
MsgDisp("主人公","Yeah.
I'm digging in!");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("D140B06101_04_010");
MsgDisp("Nanatsumori","...I wonder if he'll
get jealous later.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("D140B06101_01_010");
MsgDisp("Kazama","He got what he deserves.
That's his fault for not being here.");
MsgDisp("主人公","? 
Are you talking about ｛本多＊＊｝?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
VoicePlay("D140B06101_01_020");
MsgDisp("Kazama","...You're surprisingly unbothered.");
MsgDisp("主人公","Eh...");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("D140B06101_04_020");
MsgDisp("Nanatsumori","Dahon isn't here.
Don't force yourself to 
keep us compa——");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D140B06101_01_030");
MsgDisp("Kazama","Nanatsumori, both of them 
are super slow, so don't worry.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D140B06101_04_030");
MsgDisp("Nanatsumori","I see...");
MsgDisp("主人公","Hey!
I don't get it at all.
What are you talking about?");
ChEye(4,0);
ChMouth(4,3);
VoicePlay("D140B06101_04_040");
MsgDisp("Nanatsumori","Two people who 
are clumsy at love.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D140B06101_01_040");
MsgDisp("Kazama","It's frustrating for us too,
just watching it.");
MsgDisp("主人公","(Hey, what are you two saying...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChClose(4,0,0);
