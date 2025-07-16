ScrFadeIn(0);
MsgDisp("主人公","(......Huh? Is ｛本多＊＊｝ still
in the shop?)");
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
VoiceEVSPlay(3);
VoicePlay("Q110300000_03_000");
MsgDisp("Honda?","｛主人公｝, here I am.");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(3,254,4,0,0,#1,#1,0,0);
VoicePlay("Q110300000_03_010");
MsgDisp("Honda","After all, I bought the Castella mascot
keychain, for us, too.");
MsgDisp("主人公","Eh, for me too?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("Q110300000_03_020");
MsgDisp("Honda","Yes, I have matcha and you get chocolate.
My sister gets the plain flavored one.");
MsgDisp("主人公","Hehe, it's a nice keepsake.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("Q110300000_03_030");
MsgDisp("Honda","Mhmmhm.
I hope my sister also enjoys the present
like you.");
MsgDisp("主人公","I'm sure it'll be fine.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("Q110300000_03_040");
MsgDisp("Honda","But if she says she doesn't need it......
Poor you, Plainie.");
MsgDisp("主人公","(Plainie......? Hehe. So
｛本多＊＊｝ already made a
nickname?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
