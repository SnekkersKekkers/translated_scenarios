BGOpen("ne100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Alright...
Should I head home now?)");
VoicePlay("E010530200_01_000");
MsgDisp("Kazama?","That's why I'm telling you I can't accept
it.");
VoicePlay("E010530200_05_000");
MsgDisp("Hiiragi?","That would be problematic.");
MsgDisp("主人公","(Huh?
That voice...)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(5,255,4,0,2,#1,#1,0,1);
ChOpen(1,255,1,0,2,#1,#1,0,2);
MsgDisp("主人公","｛柊＊＊＊｝, ｛風真＊＊｝!");
ChMotion(1,0);
Wait(30,1);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010530200_05_010");
MsgDisp("Hiiragi","Ah, it's you.
Hello.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("E010530200_01_010");
MsgDisp("Kazama","You always seem to show up at the most
random times.");
MsgDisp("主人公","Anyway...
What happened between you two?");
ChEye(1,2);
ChMouth(1,1);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("E010530200_05_020");
MsgDisp("Hiiragi","Oh right.
I'm worried because Kazama-kun won't
accept my gift.");
ChEyeOpenLevel(5,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("E010530200_01_020");
MsgDisp("Kazama","Hiiragi-kun, you're way too stubborn.");
MsgDisp("主人公","Um...?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010530200_05_030");
MsgDisp("Hiiragi","I asked Kazama-kun to help repair our
props.");
MsgDisp("主人公","Wow, ｛風真＊＊｝, you're able
to do that too?");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("E010530200_01_030");
MsgDisp("Kazama","Since it's my work, I can handle antiques
or collectibles.");
ChMouth(1,0);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010530200_05_040");
MsgDisp("Hiiragi","I saw Kazama-kun reading a book on
kintsugi when the tea bowl I was using on
stage broke.");
MsgDisp("主人公","Kintsugi?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("E010530200_01_040");
MsgDisp("Kazama","It's a restoration technique my grandpa
taught me. You use lacquer and gold powder
to glue the pieces back together.");
MsgDisp("主人公","Wow...");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("E010530200_05_050");
MsgDisp("Hiiragi","It came out perfect.
Thank you so much.
So about the payment-");
ChEye(5,0);
ChMouth(5,2);
ChEye(1,2);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("E010530200_01_050");
MsgDisp("Kazama","No, no.
It's alright.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("E010530200_01_060");
MsgDisp("Kazama","...Fine.
How about you treat me to some Alucard
coffee?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("E010530200_05_060");
MsgDisp("Hiiragi","Great, I'll take you up on that then.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoiceEVSPlay(5);
VoicePlay("E010530200_05_070");
MsgDisp("Hiiragi","Would you like to join us,
｛主人公｝?");
ChMotion(1,0);
MsgDisp("主人公","Eh?
∋ I didn't help with anything...");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("E010530200_01_070");
MsgDisp("Kazama","I think I did enough for two drinks.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("E010530200_05_080");
MsgDisp("Hiiragi","Yes, of course.
Please have some sweets too.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("E010530200_01_080");
MsgDisp("Kazama","It's settled, then.
Let's go.");
MsgClose();
SEPlay("EV_SE_856");
BGMStop();
ChClose(1,0,30);
ChClose(5,0,30);
MsgDisp("主人公","Ehhh ∋
Wait a minute!");
MsgDisp("主人公","(Geez...
These two are both stubborn.
Maybe they're actually quite similar?)");
MsgClose();
ScrFadeOut(0,0);
